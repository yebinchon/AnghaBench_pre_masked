
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* next_out; int avail_out; int avail_in; void* next_in; void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;
struct stat {int st_size; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 void* FUNC_5 (int *,int ,int ,int ,int,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (int,unsigned char*,int) ;

int FUNC_9(const char *VAR_11, int VAR_12)
{
 int VAR_13 = VAR_10;
 int VAR_14;
 void *VAR_15;
 int VAR_16;
 struct stat VAR_17;
 unsigned char VAR_18[VAR_0];
 z_stream VAR_19 = {
  .zalloc = VAR_7,
  .zfree = VAR_7,
  .opaque = VAR_7,
  .avail_in = 0,
  .next_in = VAR_7,
 };

 VAR_14 = FUNC_7(VAR_11, VAR_4);
 if (VAR_14 < 0)
  return -1;

 if (FUNC_1(VAR_14, &VAR_17) < 0)
  goto out_close;

 VAR_15 = FUNC_5(((void*)0), VAR_17.st_size, VAR_5, VAR_2, VAR_14, 0);
 if (VAR_15 == VAR_1)
  goto out_close;

 if (FUNC_4(&VAR_19, 16 + VAR_3) != VAR_8)
  goto out_unmap;

 VAR_19.next_in = VAR_15;
 VAR_19.avail_in = VAR_17.st_size;

 do {
  VAR_19.next_out = VAR_18;
  VAR_19.avail_out = VAR_0;

  VAR_13 = FUNC_2(&VAR_19, VAR_6);
  switch (VAR_13) {
  case 128:
   VAR_13 = 130;

  case 130:
  case 129:
   goto out;
  default:
   break;
  }

  VAR_16 = VAR_0 - VAR_19.avail_out;
  if (FUNC_8(VAR_12, VAR_18, VAR_16) != VAR_16) {
   VAR_13 = 130;
   goto out;
  }

 } while (VAR_13 != VAR_9);

out:
 FUNC_3(&VAR_19);
out_unmap:
 FUNC_6(VAR_15, VAR_17.st_size);
out_close:
 FUNC_0(VAR_14);

 return VAR_13 == VAR_9 ? 0 : -1;
}
