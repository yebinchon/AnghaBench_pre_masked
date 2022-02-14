
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

ut32 FUNC_0(ut32 VAR_5, unsigned VAR_6, int VAR_7) {
 ut32 VAR_8 = 0;
 VAR_5 /= VAR_7? VAR_1: 2;
 VAR_5 += VAR_5 / VAR_6;

 while (VAR_5 > ((VAR_0 - VAR_4) * VAR_3) / 2) {
  VAR_5 /= (VAR_0 - VAR_4);
  VAR_8 += VAR_0;
 }

 return VAR_8 + (((VAR_0 - VAR_4 + 1) * VAR_5) / (VAR_5 + VAR_2));
}
