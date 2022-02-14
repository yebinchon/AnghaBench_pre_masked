
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ut8 ;
typedef int ut32 ;
struct gport {scalar_t__ (* get_reply ) (struct gport*,int ,int *) ;scalar_t__ (* send_request ) (struct gport*,int *) ;int (* frame ) (int *) ;int max_tx_size; } ;
typedef int RBuffer ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct gport*,int *) ;
 scalar_t__ FUNC_7 (struct gport*,int ,int *) ;

__attribute__((used)) static int FUNC_8 (struct gport *VAR_2, ut32 VAR_3, const ut8 *VAR_4, ut32 VAR_5) {
 RBuffer *VAR_6 = FUNC_3 ();
 RBuffer *VAR_7 = FUNC_3 ();
 const ut8 VAR_8 = VAR_1;
 ut8 VAR_9[4];
 ut8 VAR_10[4];

 if (!VAR_6 || !VAR_7) {
  FUNC_2 (VAR_6);
  FUNC_2 (VAR_7);
  return -1;
 }

 VAR_5 = FUNC_0 (VAR_2->max_tx_size, VAR_5);

 FUNC_4 (VAR_9, VAR_3);
 FUNC_4 (VAR_10, VAR_5);

 FUNC_1 (VAR_6, &VAR_8, 1);
 FUNC_1 (VAR_6, VAR_9, 4);
 FUNC_1 (VAR_6, VAR_4, VAR_5);

 VAR_2->frame (VAR_6);

 if (VAR_2->send_request (VAR_2, VAR_6)) {
  goto fail;
 }

 if (VAR_2->get_reply (VAR_2, VAR_0, VAR_7)) {
  goto fail;
 }

 FUNC_2 (VAR_6);
 FUNC_2 (VAR_7);

 return VAR_5;

fail:
 FUNC_2 (VAR_6);
 FUNC_2 (VAR_7);
 return -1;
}
