
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6copp {int id; } ;
struct q6adm {int dummy; } ;
struct TYPE_2__ {int pkt_size; int src_port; int token; int opcode; int dest_port; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
typedef int close ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct q6adm*,struct q6copp*,struct apr_pkt*,int ) ;

__attribute__((used)) static int FUNC_3(struct q6adm *VAR_4, struct q6copp *VAR_5,
         int VAR_6, int VAR_7)
{
 struct apr_pkt VAR_8;

 VAR_8.hdr.hdr_field = FUNC_0(VAR_2,
     FUNC_1(VAR_1),
     VAR_3);
 VAR_8.hdr.pkt_size = sizeof(VAR_8);
 VAR_8.hdr.src_port = VAR_6;
 VAR_8.hdr.dest_port = VAR_5->id;
 VAR_8.hdr.token = VAR_6 << 16 | VAR_7;
 VAR_8.hdr.opcode = VAR_0;

 return FUNC_2(VAR_4, VAR_5, &VAR_8, 0);
}
