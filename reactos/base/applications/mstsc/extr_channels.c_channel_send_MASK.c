
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_11__ {int flags; int mcs_id; } ;
typedef TYPE_1__ VCHANNEL ;
struct TYPE_12__ {scalar_t__ end; scalar_t__ p; } ;
typedef TYPE_2__* STREAM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;

void
FUNC_10(STREAM VAR_9, VCHANNEL * VAR_10)
{
 uint32 VAR_11, VAR_12;
 uint32 VAR_13, VAR_14;
 uint8 *VAR_15;






 FUNC_5(VAR_9, VAR_7);
 VAR_11 = VAR_9->end - VAR_9->p - 8;

 FUNC_0(("channel_send, length = %d\n", VAR_11));

 VAR_13 = FUNC_1(VAR_11, VAR_0);




 VAR_14 = VAR_11 - VAR_13;
 VAR_12 = (VAR_14 == 0) ? VAR_1 | VAR_2 : VAR_1;
 if (VAR_10->flags & VAR_4)
  VAR_12 |= VAR_3;

 FUNC_2(VAR_9, VAR_11);
 FUNC_2(VAR_9, VAR_12);
 VAR_15 = VAR_9->end = VAR_9->p + VAR_13;
 FUNC_0(("Sending %d bytes with FLAG_FIRST\n", VAR_13));
 FUNC_9(VAR_9, VAR_8 ? VAR_6 : 0, VAR_10->mcs_id);


 while (VAR_14 > 0)
 {
  VAR_13 = FUNC_1(VAR_14, VAR_0);
  VAR_14 -= VAR_13;
  VAR_12 = (VAR_14 == 0) ? VAR_2 : 0;
  if (VAR_10->flags & VAR_4)
   VAR_12 |= VAR_3;

  FUNC_0(("Sending %d bytes with flags %d\n", VAR_13, VAR_12));

  VAR_9 = FUNC_8(VAR_8 ? VAR_6 : 0, VAR_13 + 8);
  FUNC_2(VAR_9, VAR_11);
  FUNC_2(VAR_9, VAR_12);
  FUNC_3(VAR_9, VAR_15, VAR_13);
  FUNC_4(VAR_9);
  FUNC_9(VAR_9, VAR_8 ? VAR_6 : 0, VAR_10->mcs_id);

  VAR_15 += VAR_13;
 }




}
