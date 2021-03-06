
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ off_t ;


 scalar_t__ file_append ;
 int file_append_cleanup () ;
 scalar_t__ file_append_size ;
 scalar_t__ file_end ;
 scalar_t__ file_ptr ;
 int file_updated ;
 int memcpy (scalar_t__,void const* const,size_t const) ;
 int mmap_cleanup () ;
 int perror (char*) ;
 scalar_t__ realloc (scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t uwrite(void const *const buf, size_t const count)
{
 size_t cnt = count;
 off_t idx = 0;

 file_updated = 1;

 if (file_ptr + count >= file_end) {
  off_t aoffset = (file_ptr + count) - file_end;

  if (aoffset > file_append_size) {
   file_append = realloc(file_append, aoffset);
   file_append_size = aoffset;
  }
  if (!file_append) {
   perror("write");
   file_append_cleanup();
   mmap_cleanup();
   return -1;
  }
  if (file_ptr < file_end) {
   cnt = file_end - file_ptr;
  } else {
   cnt = 0;
   idx = aoffset - count;
  }
 }

 if (cnt)
  memcpy(file_ptr, buf, cnt);

 if (cnt < count)
  memcpy(file_append + idx, buf + cnt, count - cnt);

 file_ptr += count;
 return count;
}
