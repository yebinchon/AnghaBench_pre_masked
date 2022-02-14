
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;
typedef scalar_t__ (* BufferOp ) (int,char const*,scalar_t__) ;



__attribute__((used)) static int FUNC_0(BufferOp VAR_0, int VAR_1, const char *VAR_2, ut32 VAR_3) {
 ut32 VAR_4;
 while (VAR_3 > 0) {
  VAR_4 = VAR_0 (VAR_1, VAR_2, VAR_3);
  if (VAR_4 != VAR_3) {
   return 0;
  }
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }
 return 1;
}
