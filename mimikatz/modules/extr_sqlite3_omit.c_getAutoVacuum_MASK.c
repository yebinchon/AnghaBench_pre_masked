
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3){
  int VAR_4;
  if( 0==FUNC_1(VAR_3, "none") ) return VAR_2;
  if( 0==FUNC_1(VAR_3, "full") ) return VAR_0;
  if( 0==FUNC_1(VAR_3, "incremental") ) return VAR_1;
  VAR_4 = FUNC_0(VAR_3);
  return (u8)((VAR_4>=0&&VAR_4<=2)?VAR_4:0);
}
