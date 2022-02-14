
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int use_mdcbuf_filter; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int **,int *,int,int,TYPE_1__*) ;
 int FUNC_4 (int *,int*,int*,int ) ;
 int FUNC_5 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(PGP_Context *VAR_5, MBuf *VAR_6, PullFilter *VAR_7,
      int VAR_8, int VAR_9)
{
 uint8 VAR_10;
 int VAR_11,
    VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 PullFilter *VAR_15 = ((void*)0);

 while (1)
 {
  VAR_12 = FUNC_4(VAR_7, &VAR_10, &VAR_11, VAR_0);
  if (VAR_12 <= 0)
   break;



  if (VAR_14)
  {
   FUNC_7("process_data_packets: data after mdc");
   VAR_12 = VAR_3;
   break;
  }





  if (VAR_9 && VAR_12 == VAR_2)
   VAR_12 = FUNC_5(&VAR_15, &VAR_4, VAR_5, VAR_7);
  else
   VAR_12 = FUNC_3(&VAR_15, VAR_7, VAR_11, VAR_12, VAR_5);
  if (VAR_12 < 0)
   break;

  switch (VAR_10)
  {
   case 129:
    VAR_13 = 1;
    VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_15);
    break;
   case 130:
    if (VAR_8 == 0)
    {
     FUNC_7("process_data_packets: unexpected compression");
     VAR_12 = VAR_3;
    }
    else if (VAR_13)
    {



     FUNC_7("process_data_packets: only one cmpr pkt allowed");
     VAR_12 = VAR_3;
    }
    else
    {
     VAR_13 = 1;
     VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_15);
    }
    break;
   case 128:
    if (VAR_9 == VAR_1)
    {
     FUNC_7("process_data_packets: unexpected MDC");
     VAR_12 = VAR_3;
     break;
    }

    VAR_12 = FUNC_0(VAR_5, VAR_15, VAR_11);
    if (VAR_12 >= 0)
     VAR_14 = 1;
    break;
   default:
    FUNC_7("process_data_packets: unexpected pkt tag=%d", VAR_10);
    VAR_12 = VAR_3;
  }

  FUNC_6(VAR_15);
  VAR_15 = ((void*)0);

  if (VAR_12 < 0)
   break;
 }

 if (VAR_15)
  FUNC_6(VAR_15);

 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_13)
 {
  FUNC_7("process_data_packets: no data");
  VAR_12 = VAR_3;
 }
 if (VAR_9 && !VAR_14 && !VAR_5->use_mdcbuf_filter)
 {
  FUNC_7("process_data_packets: got no mdc");
  VAR_12 = VAR_3;
 }
 return VAR_12;
}
