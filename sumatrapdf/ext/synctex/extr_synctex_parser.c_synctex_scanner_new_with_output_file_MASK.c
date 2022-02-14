
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int synctex_io_mode_t ;
typedef int * gzFile ;
typedef int _synctex_scanner_t ;
struct TYPE_5__ {char* output; char* synctex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char const*,char**,int **,int ,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;

synctex_scanner_t FUNC_9(const char * VAR_6, const char * VAR_7, int VAR_8) {
 gzFile VAR_9 = ((void*)0);
 char * VAR_10 = ((void*)0);
 synctex_scanner_t VAR_11 = ((void*)0);
 synctex_io_mode_t VAR_12 = 0;

 if (sizeof(int)>sizeof(void*)) {
  FUNC_0("INTERNAL INCONSISTENCY: int's are unexpectedly bigger than pointers, bailing out.");
  return ((void*)0);
 }

 if (VAR_1 >= VAR_3) {
  FUNC_0("SyncTeX BUG: Internal inconsistency, bad SYNCTEX_BUFFER_SIZE (1)");
  return ((void*)0);
 }

 if (VAR_1 < VAR_0) {
  FUNC_0("SyncTeX BUG: Internal inconsistency, bad SYNCTEX_BUFFER_SIZE (2)");
  return ((void*)0);
 }

 if (FUNC_2(VAR_6,VAR_7,&VAR_10,&VAR_9,VAR_4,&VAR_12) || !VAR_9) {
  if (FUNC_2(VAR_6,VAR_7,&VAR_10,&VAR_9,VAR_5,&VAR_12) || !VAR_9) {
   return ((void*)0);
  }
 }
 VAR_11 = (synctex_scanner_t)FUNC_1(sizeof(_synctex_scanner_t));
 if (((void*)0) == VAR_11) {
  FUNC_0("SyncTeX: malloc problem");
  FUNC_3(VAR_10);
  FUNC_4(VAR_9);
  return ((void*)0);
 }

 if (((void*)0) == (VAR_11->output = (char *)FUNC_5(FUNC_7(VAR_6)+1))){
  FUNC_0("!  synctex_scanner_new_with_output_file: Memory problem (2), scanner's output is not reliable.");
 } else if (VAR_11->output != FUNC_6(VAR_11->output,VAR_6)) {
  FUNC_0("!  synctex_scanner_new_with_output_file: Copy problem, scanner's output is not reliable.");
 }
 VAR_11->synctex = VAR_10;
 VAR_2 = VAR_9;
 return VAR_8? FUNC_8(VAR_11):VAR_11;
}
