
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int const*,int const,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const uint8_t *VAR_3, const uint64_t VAR_4, const int VAR_5) {
 int VAR_6 = FUNC_2 ((int) (size_t) VAR_2, VAR_3, VAR_4, 0);
 if (VAR_6 < 1) {
  FUNC_1 ("iob_pipe_write, send");
  if (VAR_1 == VAR_0) {
   FUNC_0 (1);
  }
 }
 return VAR_6;
}
