
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_15__ {int flags; int mcs_id; } ;
typedef TYPE_1__ VCHANNEL ;
struct TYPE_17__ {scalar_t__ encryption; } ;
struct TYPE_16__ {scalar_t__ end; scalar_t__ p; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef int CHANNEL_PDU_HEADER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int ) ;

void
FUNC_8(RDPCLIENT * VAR_7, STREAM VAR_8, VCHANNEL * VAR_9)
{
 uint32 VAR_10, VAR_11;
 uint32 VAR_12, VAR_13;
 uint8 *VAR_14;


 FUNC_5(VAR_8, VAR_6);
 VAR_10 = VAR_8->end - VAR_8->p - sizeof(CHANNEL_PDU_HEADER);

 FUNC_0(("channel_send, length = %d\n", VAR_10));

 VAR_12 = FUNC_1(VAR_10, VAR_0);




 VAR_13 = VAR_10 - VAR_12;
 VAR_11 = (VAR_13 == 0) ? VAR_1 | VAR_2 : VAR_1;
 if (VAR_9->flags & VAR_4)
  VAR_11 |= VAR_3;

 FUNC_2(VAR_8, VAR_10);
 FUNC_2(VAR_8, VAR_11);
 VAR_14 = VAR_8->end = VAR_8->p + VAR_12;
 FUNC_0(("Sending %d bytes with FLAG_FIRST\n", VAR_12));
 FUNC_7(VAR_7, VAR_8, VAR_7->encryption ? VAR_5 : 0, VAR_9->mcs_id);


 while (VAR_13 > 0)
 {
  VAR_12 = FUNC_1(VAR_13, VAR_0);
  VAR_13 -= VAR_12;
  VAR_11 = (VAR_13 == 0) ? VAR_2 : 0;
  if (VAR_9->flags & VAR_4)
   VAR_11 |= VAR_3;

  FUNC_0(("Sending %d bytes with flags %d\n", VAR_12, VAR_11));

  VAR_8 = FUNC_6(VAR_7, VAR_7->encryption ? VAR_5 : 0, VAR_12 + 8);
  FUNC_2(VAR_8, VAR_10);
  FUNC_2(VAR_8, VAR_11);
  FUNC_3(VAR_8, VAR_14, VAR_12);
  FUNC_4(VAR_8);
  FUNC_7(VAR_7, VAR_8, VAR_7->encryption ? VAR_5 : 0, VAR_9->mcs_id);

  VAR_14 += VAR_12;
 }
}
