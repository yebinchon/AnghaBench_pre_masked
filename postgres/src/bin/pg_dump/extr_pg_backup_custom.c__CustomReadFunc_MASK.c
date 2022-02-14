
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArchiveHandle ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static size_t
FUNC_4(ArchiveHandle *VAR_0, char **VAR_1, size_t *VAR_2)
{
 size_t VAR_3;


 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == 0)
  return 0;


 if (VAR_3 > *VAR_2)
 {
  FUNC_2(*VAR_1);
  *VAR_1 = (char *) FUNC_3(VAR_3);
  *VAR_2 = VAR_3;
 }


 FUNC_1(VAR_0, *VAR_1, VAR_3);

 return VAR_3;
}
