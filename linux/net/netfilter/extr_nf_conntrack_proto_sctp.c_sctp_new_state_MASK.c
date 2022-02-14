
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sctp_conntrack { ____Placeholder_sctp_conntrack } sctp_conntrack ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
 int FUNC_0 (char*,...) ;
 int * VAR_0 ;
 size_t*** VAR_1 ;

__attribute__((used)) static int FUNC_1(enum ip_conntrack_dir VAR_2,
     enum sctp_conntrack VAR_3,
     int VAR_4)
{
 int VAR_5;

 FUNC_0("Chunk type: %d\n", VAR_4);

 switch (VAR_4) {
 case 132:
  FUNC_0("SCTP_CID_INIT\n");
  VAR_5 = 0;
  break;
 case 131:
  FUNC_0("SCTP_CID_INIT_ACK\n");
  VAR_5 = 1;
  break;
 case 138:
  FUNC_0("SCTP_CID_ABORT\n");
  VAR_5 = 2;
  break;
 case 130:
  FUNC_0("SCTP_CID_SHUTDOWN\n");
  VAR_5 = 3;
  break;
 case 129:
  FUNC_0("SCTP_CID_SHUTDOWN_ACK\n");
  VAR_5 = 4;
  break;
 case 135:
  FUNC_0("SCTP_CID_ERROR\n");
  VAR_5 = 5;
  break;
 case 136:
  FUNC_0("SCTP_CID_COOKIE_ECHO\n");
  VAR_5 = 6;
  break;
 case 137:
  FUNC_0("SCTP_CID_COOKIE_ACK\n");
  VAR_5 = 7;
  break;
 case 128:
  FUNC_0("SCTP_CID_SHUTDOWN_COMPLETE\n");
  VAR_5 = 8;
  break;
 case 134:
  FUNC_0("SCTP_CID_HEARTBEAT");
  VAR_5 = 9;
  break;
 case 133:
  FUNC_0("SCTP_CID_HEARTBEAT_ACK");
  VAR_5 = 10;
  break;
 default:

  FUNC_0("Unknown chunk type, Will stay in %s\n",
    VAR_0[VAR_3]);
  return VAR_3;
 }

 FUNC_0("dir: %d   cur_state: %s  chunk_type: %d  new_state: %s\n",
   VAR_2, VAR_0[VAR_3], VAR_4,
   VAR_0[VAR_1[VAR_2][VAR_5][VAR_3]]);

 return VAR_1[VAR_2][VAR_5][VAR_3];
}
