
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_vb_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gs_vb_data*,float,float,float,float,float,float) ;

__attribute__((used)) static inline void FUNC_1(struct gs_vb_data *VAR_2, float VAR_3,
     float VAR_4, float VAR_5,
     float VAR_6, float VAR_7, float VAR_8,
     uint32_t VAR_9)
{
 float VAR_10, VAR_11;
 float VAR_12, VAR_13;

 if ((VAR_9 & VAR_0) == 0) {
  VAR_10 = VAR_3 / VAR_7;
  VAR_11 = (VAR_3 + VAR_5) / VAR_7;
 } else {
  VAR_10 = (VAR_3 + VAR_5) / VAR_7;
  VAR_11 = VAR_3 / VAR_7;
 }

 if ((VAR_9 & VAR_1) == 0) {
  VAR_12 = VAR_4 / VAR_8;
  VAR_13 = (VAR_4 + VAR_6) / VAR_8;
 } else {
  VAR_12 = (VAR_4 + VAR_6) / VAR_8;
  VAR_13 = VAR_4 / VAR_8;
 }

 FUNC_0(VAR_2, VAR_5, VAR_6, VAR_10, VAR_11, VAR_12, VAR_13);
}
