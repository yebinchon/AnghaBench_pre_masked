
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* dn; int id; } ;
struct TYPE_6__ {TYPE_1__ layer; int dev_info; } ;
struct cfrfml {scalar_t__ fragment_size; TYPE_2__ serv; } ;
struct cfpkt {int dummy; } ;
struct TYPE_8__ {int * dev_info; scalar_t__ hdr_len; int channel_id; } ;
struct TYPE_7__ {int (* transmit ) (TYPE_3__*,struct cfpkt*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfpkt*) ;
 TYPE_4__* FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (TYPE_3__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_4(struct cfrfml *VAR_1, struct cfpkt *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2) < VAR_1->fragment_size + VAR_0);


 FUNC_2(VAR_2)->channel_id = VAR_1->serv.layer.id;





 FUNC_2(VAR_2)->hdr_len = VAR_0;
 FUNC_2(VAR_2)->dev_info = &VAR_1->serv.dev_info;

 return VAR_1->serv.layer.dn->transmit(VAR_1->serv.layer.dn, VAR_2);
}
