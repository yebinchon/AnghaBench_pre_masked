
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int RTL_ATOM ;
typedef int * PRTL_ATOM_TABLE ;
typedef int NTSTATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int*,int*,int *,int*) ;
 int FUNC_7 (char*,...) ;

int FUNC_8(int VAR_1, char* VAR_2[])
{
   PRTL_ATOM_TABLE VAR_3 = ((void*)0);
   RTL_ATOM VAR_4 = -1, VAR_5 = -1, VAR_6 = -1;
   NTSTATUS VAR_7;
   WCHAR VAR_8[VAR_0];
   ULONG VAR_9, VAR_10, VAR_11;

   FUNC_7("Atom table test app\n\n");

   FUNC_7("RtlCreateAtomTable()\n");
   VAR_7 = FUNC_2(37,
          &VAR_3);
   FUNC_7("  Status 0x%08lx\n", VAR_7);

   if (FUNC_0(VAR_7))
     {
 FUNC_7("  AtomTable %p\n", VAR_3);

 FUNC_7("RtlAddAtomToAtomTable()\n");
 VAR_7 = FUNC_1(VAR_3,
           L"TestAtomA",
           &VAR_4);
 FUNC_7("  Status 0x%08lx\n", VAR_7);
 if (FUNC_0(VAR_7))
   {
      FUNC_7("  AtomA 0x%x\n", VAR_4);
   }

 FUNC_7("RtlAddAtomToAtomTable()\n");
 VAR_7 = FUNC_1(VAR_3,
           L"TestAtomB",
           &VAR_5);
 FUNC_7("  Status 0x%08lx\n", VAR_7);
 if (FUNC_0(VAR_7))
   {
      FUNC_7("  AtomB 0x%x\n", VAR_5);
   }


 FUNC_7("RtlLookupAtomInAtomTable()\n");
 VAR_7 = FUNC_4(VAR_3,
       L"TestAtomA",
       &VAR_6);
 FUNC_7("  Status 0x%08lx\n", VAR_7);
 if (FUNC_0(VAR_7))
   {
      FUNC_7("  AtomC 0x%x\n", VAR_6);
   }


 FUNC_7("RtlPinAtomInAtomTable()\n");
 VAR_7 = FUNC_5(VAR_3,
           VAR_6);
 FUNC_7("  Status 0x%08lx\n", VAR_7);

 FUNC_7("RtlPinAtomInAtomTable()\n");
 VAR_7 = FUNC_5(VAR_3,
           VAR_6);
 FUNC_7("  Status 0x%08lx\n", VAR_7);
 FUNC_7("RtlQueryAtomInAtomTable()\n");
 VAR_9 = sizeof(WCHAR) * VAR_0;
 VAR_7 = FUNC_6(VAR_3,
      VAR_6,
      &VAR_10,
      &VAR_11,
      VAR_8,
      &VAR_9);
 FUNC_7("  Status 0x%08lx\n", VAR_7);
 if (FUNC_0(VAR_7))
   {
      FUNC_7("  RefCount %ld\n", VAR_10);
      FUNC_7("  PinCount %ld\n", VAR_11);
      FUNC_7("  NameLength %lu\n", VAR_9);
      FUNC_7("  AtomName: %S\n", VAR_8);
   }

 FUNC_7("RtlDestroyAtomTable()\n");
 FUNC_3(VAR_3);


 FUNC_7("Atom table test app finished\n");
     }

   return(0);
}
