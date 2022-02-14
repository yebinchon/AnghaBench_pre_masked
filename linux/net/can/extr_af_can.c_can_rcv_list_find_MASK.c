
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct can_dev_rcv_lists {struct hlist_head* rx; struct hlist_head* rx_sff; struct hlist_head* rx_eff; } ;
typedef int canid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t FUNC_0 (int) ;

__attribute__((used)) static struct hlist_head *FUNC_1(canid_t *VAR_12, canid_t *VAR_13,
         struct can_dev_rcv_lists *VAR_14)
{
 canid_t VAR_15 = *VAR_12 & VAR_5;


 if (*VAR_13 & VAR_3) {

  *VAR_13 &= VAR_4;
  return &VAR_14->rx[VAR_9];
 }






 if ((*VAR_13 & VAR_0) && !(*VAR_12 & VAR_0))
  *VAR_13 &= (VAR_7 | (VAR_0 | VAR_6));


 *VAR_12 &= *VAR_13;


 if (VAR_15)
  return &VAR_14->rx[VAR_11];


 if (!(*VAR_13))
  return &VAR_14->rx[VAR_8];


 if (((*VAR_13 & (VAR_0 | VAR_6)) == (VAR_0 | VAR_6)) &&
     !(*VAR_12 & VAR_6)) {
  if (*VAR_12 & VAR_0) {
   if (*VAR_13 == (VAR_1 | (VAR_0 | VAR_6)))
    return &VAR_14->rx_eff[FUNC_0(*VAR_12)];
  } else {
   if (*VAR_13 == (VAR_7 | (VAR_0 | VAR_6)))
    return &VAR_14->rx_sff[*VAR_12];
  }
 }


 return &VAR_14->rx[VAR_10];
}
