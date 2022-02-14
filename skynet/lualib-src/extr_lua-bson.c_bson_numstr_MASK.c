
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static inline int
FUNC_2( char *VAR_3, unsigned int VAR_4 ) {
 if ( VAR_4 < VAR_0) {
  FUNC_0( VAR_3, VAR_2[VAR_4], 4 );
  return VAR_1[VAR_4];
 } else {
  return FUNC_1( VAR_3,"%u", VAR_4 );
 }
}
