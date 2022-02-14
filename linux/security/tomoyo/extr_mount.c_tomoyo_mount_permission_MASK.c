
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_request_info {int dummy; } ;
struct path {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ FUNC_0 (struct tomoyo_request_info*,int *,int ) ;
 int FUNC_1 (struct tomoyo_request_info*,char const*,struct path const*,char const*,unsigned long) ;
 char** VAR_19 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

int FUNC_4(const char *VAR_20, const struct path *VAR_21,
       const char *VAR_22, unsigned long VAR_23,
       void *VAR_24)
{
 struct tomoyo_request_info VAR_25;
 int VAR_26;
 int VAR_27;

 if (FUNC_0(&VAR_25, ((void*)0), VAR_11)
     == VAR_10)
  return 0;
 if ((VAR_23 & VAR_2) == VAR_3)
  VAR_23 &= ~VAR_2;
 if (VAR_23 & VAR_6) {
  VAR_22 = VAR_19[VAR_18];
  VAR_23 &= ~VAR_6;
 } else if (VAR_23 & VAR_1) {
  VAR_22 = VAR_19[VAR_12];
  VAR_23 &= ~VAR_1;
 } else if (VAR_23 & VAR_7) {
  if (VAR_23 & (VAR_5 | VAR_8 | VAR_9))
   return -VAR_0;
  VAR_22 = VAR_19[VAR_14];
  VAR_23 &= ~VAR_7;
 } else if (VAR_23 & VAR_5) {
  if (VAR_23 & (VAR_7 | VAR_8 | VAR_9))
   return -VAR_0;
  VAR_22 = VAR_19[VAR_13];
  VAR_23 &= ~VAR_5;
 } else if (VAR_23 & VAR_8) {
  if (VAR_23 & (VAR_7 | VAR_5 | VAR_9))
   return -VAR_0;
  VAR_22 = VAR_19[VAR_15];
  VAR_23 &= ~VAR_8;
 } else if (VAR_23 & VAR_9) {
  if (VAR_23 & (VAR_7 | VAR_5 | VAR_8))
   return -VAR_0;
  VAR_22 = VAR_19[VAR_16];
  VAR_23 &= ~VAR_9;
 } else if (VAR_23 & VAR_4) {
  VAR_22 = VAR_19[VAR_17];
  VAR_23 &= ~VAR_4;
 }
 if (!VAR_22)
  VAR_22 = "<NULL>";
 VAR_27 = FUNC_2();
 VAR_26 = FUNC_1(&VAR_25, VAR_20, VAR_21, VAR_22, VAR_23);
 FUNC_3(VAR_27);
 return VAR_26;
}
