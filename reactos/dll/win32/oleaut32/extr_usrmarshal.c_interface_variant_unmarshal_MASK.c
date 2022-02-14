
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,unsigned char*,int **) ;
 unsigned char* FUNC_1 (int *,unsigned char*,int **,int ) ;

__attribute__((used)) static unsigned char *FUNC_2(ULONG *VAR_0, unsigned char *VAR_1,
                                                  REFIID VAR_2, IUnknown **VAR_3)
{
  DWORD VAR_4;

  FUNC_0("pFlags=%d, Buffer=%p, ppUnk=%p\n", *VAR_0, VAR_1, VAR_3);


  VAR_4 = *(DWORD*)VAR_1;
  VAR_1 += sizeof(DWORD);

  if(!VAR_4)
      return VAR_1;

  return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
}
