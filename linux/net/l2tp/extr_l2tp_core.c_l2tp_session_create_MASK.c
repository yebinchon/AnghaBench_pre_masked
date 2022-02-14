
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct l2tp_tunnel {int tunnel_id; int version; int debug; } ;
struct l2tp_session_cfg {int peer_cookie_len; int * peer_cookie; int cookie_len; int * cookie; int l2specific_type; int reorder_timeout; int lns_mode; int recv_seq; int send_seq; int debug; int pw_type; } ;
struct l2tp_session {int session_id; int nr_max; int nr_window_size; int nr_oos_count_max; int reorder_skip; int ref_count; int build_header; int * peer_cookie; int peer_cookie_len; int * cookie; int cookie_len; int l2specific_type; int reorder_timeout; int lns_mode; int recv_seq; int send_seq; int debug; int pwtype; int global_hlist; int hlist; int reorder_q; int * name; scalar_t__ nr; void* peer_session_id; struct l2tp_tunnel* tunnel; int magic; } ;


 int VAR_0 ;
 struct l2tp_session* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct l2tp_session* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct l2tp_session*,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int,int) ;

struct l2tp_session *FUNC_8(int VAR_6, struct l2tp_tunnel *VAR_7, u32 VAR_8, u32 VAR_9, struct l2tp_session_cfg *VAR_10)
{
 struct l2tp_session *VAR_11;

 VAR_11 = FUNC_2(sizeof(struct l2tp_session) + VAR_6, VAR_1);
 if (VAR_11 != ((void*)0)) {
  VAR_11->magic = VAR_3;
  VAR_11->tunnel = VAR_7;

  VAR_11->session_id = VAR_8;
  VAR_11->peer_session_id = VAR_9;
  VAR_11->nr = 0;
  if (VAR_7->version == VAR_2)
   VAR_11->nr_max = 0xffff;
  else
   VAR_11->nr_max = 0xffffff;
  VAR_11->nr_window_size = VAR_11->nr_max / 2;
  VAR_11->nr_oos_count_max = 4;


  VAR_11->reorder_skip = 1;

  FUNC_7(&VAR_11->name[0], "sess %u/%u",
   VAR_7->tunnel_id, VAR_11->session_id);

  FUNC_6(&VAR_11->reorder_q);

  FUNC_1(&VAR_11->hlist);
  FUNC_1(&VAR_11->global_hlist);


  VAR_11->debug = VAR_7->debug;

  if (VAR_10) {
   VAR_11->pwtype = VAR_10->pw_type;
   VAR_11->debug = VAR_10->debug;
   VAR_11->send_seq = VAR_10->send_seq;
   VAR_11->recv_seq = VAR_10->recv_seq;
   VAR_11->lns_mode = VAR_10->lns_mode;
   VAR_11->reorder_timeout = VAR_10->reorder_timeout;
   VAR_11->l2specific_type = VAR_10->l2specific_type;
   VAR_11->cookie_len = VAR_10->cookie_len;
   FUNC_4(&VAR_11->cookie[0], &VAR_10->cookie[0], VAR_10->cookie_len);
   VAR_11->peer_cookie_len = VAR_10->peer_cookie_len;
   FUNC_4(&VAR_11->peer_cookie[0], &VAR_10->peer_cookie[0], VAR_10->peer_cookie_len);
  }

  if (VAR_7->version == VAR_2)
   VAR_11->build_header = VAR_4;
  else
   VAR_11->build_header = VAR_5;

  FUNC_3(VAR_11, VAR_7->version);

  FUNC_5(&VAR_11->ref_count, 1);

  return VAR_11;
 }

 return FUNC_0(-VAR_0);
}
