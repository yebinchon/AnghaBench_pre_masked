
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct l2cap_chan {void* sport; void* psm; int src_type; } ;
typedef int bdaddr_t ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (void*,int *,int ) ;
 int VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct l2cap_chan *VAR_8, bdaddr_t *VAR_9, __le16 VAR_10)
{
 int VAR_11;

 FUNC_2(&VAR_7);

 if (VAR_10 && FUNC_0(VAR_10, VAR_9, VAR_8->src_type)) {
  VAR_11 = -VAR_1;
  goto done;
 }

 if (VAR_10) {
  VAR_8->psm = VAR_10;
  VAR_8->sport = VAR_10;
  VAR_11 = 0;
 } else {
  u16 VAR_12, VAR_13, VAR_14, VAR_15;

  if (VAR_8->src_type == VAR_0) {
   VAR_13 = VAR_4;
   VAR_14 = VAR_3;
   VAR_15 = 2;
  } else {
   VAR_13 = VAR_6;
   VAR_14 = VAR_5;
   VAR_15 = 1;
  }

  VAR_11 = -VAR_2;
  for (VAR_12 = VAR_13; VAR_12 <= VAR_14; VAR_12 += VAR_15)
   if (!FUNC_0(FUNC_1(VAR_12), VAR_9,
        VAR_8->src_type)) {
    VAR_8->psm = FUNC_1(VAR_12);
    VAR_8->sport = FUNC_1(VAR_12);
    VAR_11 = 0;
    break;
   }
 }

done:
 FUNC_3(&VAR_7);
 return VAR_11;
}
