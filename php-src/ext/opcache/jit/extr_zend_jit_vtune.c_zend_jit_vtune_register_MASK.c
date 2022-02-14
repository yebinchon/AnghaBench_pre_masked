
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* method_name; size_t method_size; void* method_load_address; int * source_file_name; int * class_file_name; int method_id; int member_0; } ;
typedef TYPE_1__ iJIT_Method_Load ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const char *VAR_2,
                                    const void *VAR_3,
                                    size_t VAR_4)
{
 iJIT_Method_Load VAR_5 = {0};

 if (FUNC_1() != VAR_0) {
  return;
 }

 VAR_5.method_id = FUNC_0();
 VAR_5.method_name = (char*)VAR_2;
 VAR_5.class_file_name = ((void*)0);
 VAR_5.source_file_name = ((void*)0);
 VAR_5.method_load_address = (void*)VAR_3;
 VAR_5.method_size = VAR_4;

 FUNC_2(VAR_1, (void*)&VAR_5);
}
