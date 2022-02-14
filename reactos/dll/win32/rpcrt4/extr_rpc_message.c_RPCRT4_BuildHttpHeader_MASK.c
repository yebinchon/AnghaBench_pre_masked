
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {unsigned short flags; unsigned short num_data_items; } ;
struct TYPE_8__ {int flags; int frag_len; scalar_t__ call_id; } ;
struct TYPE_9__ {TYPE_1__ http; TYPE_2__ common; } ;
typedef TYPE_3__ RpcPktHdr ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

RpcPktHdr *FUNC_4(ULONG VAR_4,
                                  unsigned short VAR_5,
                                  unsigned short VAR_6,
                                  unsigned int VAR_7)
{
  RpcPktHdr *VAR_8;

  VAR_8 = FUNC_2(FUNC_1(), VAR_0, sizeof(VAR_8->http) + VAR_7);
  if (VAR_8 == ((void*)0)) {
      FUNC_0("failed to allocate memory\n");
    return ((void*)0);
  }

  FUNC_3(VAR_8, VAR_1, VAR_4);


  VAR_8->common.flags = VAR_2|VAR_3;
  VAR_8->common.call_id = 0;
  VAR_8->common.frag_len = sizeof(VAR_8->http) + VAR_7;
  VAR_8->http.flags = VAR_5;
  VAR_8->http.num_data_items = VAR_6;

  return VAR_8;
}
