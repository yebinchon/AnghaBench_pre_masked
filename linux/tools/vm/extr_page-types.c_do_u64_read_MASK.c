
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char const*) ;
 long FUNC_3 (int,int *,unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_4(int VAR_2, const char *VAR_3,
     uint64_t *VAR_4,
     unsigned long VAR_5,
     unsigned long VAR_6)
{
 long VAR_7;

 if (VAR_5 > VAR_1 / 8)
  FUNC_1("index overflow: %lu\n", VAR_5);

 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_6 * 8, (off_t)VAR_5 * 8);
 if (VAR_7 < 0) {
  FUNC_2(VAR_3);
  FUNC_0(VAR_0);
 }
 if (VAR_7 % 8)
  FUNC_1("partial read: %lu bytes\n", VAR_7);

 return VAR_7 / 8;
}
