
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_8, unsigned int VAR_9,
           int *VAR_10)
{
 unsigned int VAR_11 = 2 * VAR_8 / VAR_9;

 if (VAR_11 <= 2) {
  *VAR_10 = VAR_0;
  VAR_11 = 2;
 } else if (VAR_11 == 3) {
  *VAR_10 = VAR_2;
 } else if (VAR_11 == 4) {
  *VAR_10 = VAR_3;
 } else if (VAR_11 <= 6) {
  *VAR_10 = VAR_4;
  VAR_11 = 6;
 } else if (VAR_11 <= 8) {
  *VAR_10 = VAR_5;
  VAR_11 = 8;
 } else if (VAR_11 <= 12) {
  *VAR_10 = VAR_6;
  VAR_11 = 12;
 } else if (VAR_11 <= 16) {
  *VAR_10 = VAR_7;
  VAR_11 = 16;
 } else {
  *VAR_10 = VAR_1;
  VAR_11 = 24;
 }

 return VAR_9 * VAR_11 / 2;
}
