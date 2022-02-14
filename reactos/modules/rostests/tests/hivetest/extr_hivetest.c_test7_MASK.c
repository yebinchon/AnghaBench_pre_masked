
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(void)
{
  HANDLE VAR_6;
  OBJECT_ATTRIBUTES VAR_7;
  UNICODE_STRING VAR_8,VAR_9;
  NTSTATUS VAR_10;

  FUNC_7("Open link key\n");
  FUNC_7("  Key: \\Registry\\Machine\\SOFTWARE\\Test\n");
  FUNC_6(&VAR_8, L"\\Registry\\Machine\\SOFTWARE\\Test");
  FUNC_0(&VAR_7,
        &VAR_8,
        VAR_1 | VAR_2 | VAR_3,
        ((void*)0),
        ((void*)0));
  VAR_10 = FUNC_3(&VAR_6,
         VAR_0,
         &VAR_7,
         0,
         ((void*)0),
         VAR_5 | VAR_4,
         ((void*)0));
  FUNC_7("  NtCreateKey() called (Status %lx)\n",VAR_10);
  if (!FUNC_1(VAR_10))
    {
      FUNC_7("Could not open the link key. Please run the link create test first!\n");
      return;
    }

  FUNC_7("Delete link value\n");
  FUNC_6(&VAR_9, L"SymbolicLinkValue");
  VAR_10 = FUNC_5(VAR_6,
       &VAR_9);
  FUNC_7("  NtDeleteValueKey() called (Status %lx)\n",VAR_10);

  FUNC_7("Delete link key\n");
  VAR_10=FUNC_4(VAR_6);
  FUNC_7("  NtDeleteKey() called (Status %lx)\n",VAR_10);

  FUNC_7("Close link key\n");
  FUNC_2(VAR_6);
}
