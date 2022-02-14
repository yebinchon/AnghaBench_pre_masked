
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* relname; } ;
typedef TYPE_1__* FileInfoPtr ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 FileInfoPtr *VAR_2, *VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_2 = (FileInfoPtr *) VAR_0;
 VAR_3 = (FileInfoPtr *) VAR_1;

 VAR_5 = (**VAR_2).relname;
 VAR_6 = (**VAR_3).relname;

 for (VAR_4 = VAR_5, VAR_7 = 0;;) {
  VAR_10 = *VAR_4++;
  if (VAR_10 == '\0')
   break;
  if ((VAR_10 == '/') || (VAR_10 == '\\')) {
   VAR_7++;
  }
 }
 VAR_8 = VAR_7;

 for (VAR_4 = VAR_6, VAR_7 = 0;;) {
  VAR_10 = *VAR_4++;
  if (VAR_10 == '\0')
   break;
  if ((VAR_10 == '/') || (VAR_10 == '\\')) {
   VAR_7++;
  }
 }
 VAR_9 = VAR_7;

 if (VAR_8 < VAR_9)
  return (-1);
 else if (VAR_8 > VAR_9)
  return (1);




 return (FUNC_0(VAR_5, VAR_6));

}
