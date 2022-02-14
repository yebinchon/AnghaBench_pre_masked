
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
struct chmcFile {int fd; } ;
typedef size_t off_t ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int,void*,size_t) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (int ,void*,int) ;

int FUNC_6(struct chmcFile *VAR_4, const char *VAR_5, void *VAR_6,
                size_t VAR_7 )
{
 struct stat VAR_8;
 int VAR_9;
 off_t VAR_10, VAR_11;
 int VAR_12;

 if (FUNC_4(VAR_5, &VAR_8) < 0)
  return VAR_3;

 VAR_9 = FUNC_2(VAR_5, VAR_2 | VAR_1);
 if (VAR_9 >= 0) {
  VAR_10 = VAR_8.st_size;

  while (VAR_10) {
   VAR_11 = VAR_7;
   if (VAR_11 > VAR_10)
    VAR_11 = VAR_10;

   VAR_12 = FUNC_3(VAR_9, VAR_6, VAR_11);
   if (VAR_12 > 0) {
    FUNC_5(VAR_4->fd, VAR_6, VAR_12);
    VAR_10 -= VAR_12;
   }
  }

  FUNC_1(VAR_9);
 }
 else
  FUNC_0("open %s\n", VAR_5);

 return VAR_0;
}
