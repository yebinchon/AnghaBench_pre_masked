
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int DumpableObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int,int,int ) ;

__attribute__((used)) static DumpableObject **
FUNC_2(void *VAR_1, int VAR_2, Size VAR_3)
{
 DumpableObject **VAR_4;
 int VAR_5;

 VAR_4 = (DumpableObject **) FUNC_0(VAR_2 * sizeof(DumpableObject *));
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5] = (DumpableObject *) ((char *) VAR_1 + VAR_5 * VAR_3);


 if (VAR_2 > 1)
  FUNC_1((void *) VAR_4, VAR_2, sizeof(DumpableObject *),
     VAR_0);

 return VAR_4;
}
