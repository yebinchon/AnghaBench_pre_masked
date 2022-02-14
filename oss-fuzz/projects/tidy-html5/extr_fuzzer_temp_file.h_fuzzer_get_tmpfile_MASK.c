
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const,char*) ;
 int FUNC_4 (int ,char*,size_t const,size_t) ;
 size_t FUNC_5 (int const*,int,size_t,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static char* FUNC_9(const uint8_t* VAR_1, size_t VAR_2) {
  char* VAR_3 = FUNC_8("/tmp/generate_temporary_file.XXXXXX");
  if (!VAR_3) {
    FUNC_7("Failed to allocate file name buffer.");
    FUNC_0();
  }
  const int VAR_4 = FUNC_6(VAR_3);
  if (VAR_4 < 0) {
    FUNC_7("Failed to make temporary file.");
    FUNC_0();
  }
  FILE* VAR_5 = FUNC_3(VAR_4, "wb");
  if (!VAR_5) {
    FUNC_7("Failed to open file descriptor.");
    FUNC_1(VAR_4);
    FUNC_0();
  }
  const size_t VAR_6 = FUNC_5(VAR_1, sizeof(uint8_t), VAR_2, VAR_5);
  if (VAR_6 < VAR_2) {
    FUNC_1(VAR_4);
    FUNC_4(VAR_0, "Failed to write all bytes to file (%zu out of %zu)",
            VAR_6, VAR_2);
    FUNC_0();
  }
  FUNC_2(VAR_5);
  return VAR_3;
}
