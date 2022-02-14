
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int REFIID ;
typedef int IUnknown ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned char*,int *) ;
 unsigned char* FUNC_2 (int *,int ,unsigned char*,int *,int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static unsigned char* FUNC_4(ULONG *VAR_0, unsigned char *VAR_1,
                                                REFIID VAR_2, IUnknown *VAR_3)
{
  FUNC_1("pFlags=%d, Buffer=%p, pUnk=%p\n", *VAR_0, VAR_1, VAR_3);


  if(!VAR_3)
  {
      FUNC_3(VAR_1, 0, sizeof(ULONG));
      return VAR_1 + sizeof(ULONG);
  }
  else
  {
      *(DWORD*)VAR_1 = (DWORD_PTR)VAR_3;
      VAR_1 += sizeof(DWORD);
  }

  return FUNC_2(VAR_0, FUNC_0(*VAR_0), VAR_1, VAR_3, VAR_2);
}
