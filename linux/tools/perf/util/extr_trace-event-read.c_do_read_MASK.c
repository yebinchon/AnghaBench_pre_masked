
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4 <= 0) {
  FUNC_1("reading input file (size expected=%d received=%d)",
    VAR_3, VAR_4);
  return -1;
 }

 VAR_1 += VAR_4;

 return VAR_4;
}
