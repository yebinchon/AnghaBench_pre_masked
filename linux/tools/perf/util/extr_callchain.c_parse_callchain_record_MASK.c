
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_param {unsigned long dump_size; int record_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*,char**) ;

int FUNC_8(const char *VAR_5, struct callchain_param *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9 = ((void*)0);
 char *VAR_10;
 int VAR_11 = -1;


 VAR_10 = FUNC_2(FUNC_5(VAR_5) + 1);
 if (!VAR_10)
  return -VAR_3;

 FUNC_4(VAR_10, VAR_5);

 VAR_7 = FUNC_7((char *)VAR_10, ",", &VAR_9);
 VAR_8 = VAR_7 ? : (char *)VAR_10;

 do {

  if (!FUNC_6(VAR_8, "fp", sizeof("fp"))) {
   if (!FUNC_7(((void*)0), ",", &VAR_9)) {
    VAR_6->record_mode = VAR_1;
    VAR_11 = 0;
   } else
    FUNC_3("callchain: No more arguments "
           "needed for --call-graph fp\n");
   break;


  } else if (!FUNC_6(VAR_8, "dwarf", sizeof("dwarf"))) {
   const unsigned long VAR_12 = 8192;

   VAR_11 = 0;
   VAR_6->record_mode = VAR_0;
   VAR_6->dump_size = VAR_12;
   VAR_4 = 1;

   VAR_7 = FUNC_7(((void*)0), ",", &VAR_9);
   if (VAR_7) {
    unsigned long VAR_13 = 0;

    VAR_11 = FUNC_1(VAR_7, &VAR_13);
    VAR_6->dump_size = VAR_13;
   }
  } else if (!FUNC_6(VAR_8, "lbr", sizeof("lbr"))) {
   if (!FUNC_7(((void*)0), ",", &VAR_9)) {
    VAR_6->record_mode = VAR_2;
    VAR_11 = 0;
   } else
    FUNC_3("callchain: No more arguments "
     "needed for --call-graph lbr\n");
   break;
  } else {
   FUNC_3("callchain: Unknown --call-graph option "
          "value: %s\n", VAR_5);
   break;
  }

 } while (0);

 FUNC_0(VAR_10);
 return VAR_11;
}
