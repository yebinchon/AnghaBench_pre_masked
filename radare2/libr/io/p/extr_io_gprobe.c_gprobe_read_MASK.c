
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ut8 ;
typedef int ut32 ;
struct gport {scalar_t__ (* get_reply ) (struct gport*,int const,int *) ;scalar_t__ (* send_request ) (struct gport*,int *) ;int (* frame ) (int *) ;int max_rx_size; } ;
typedef int RBuffer ;


 int const VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct gport*,int *) ;
 scalar_t__ FUNC_9 (struct gport*,int const,int *) ;

__attribute__((used)) static int FUNC_10(struct gport *VAR_1, ut32 VAR_2, ut8 *VAR_3, ut32 VAR_4) {
 RBuffer *VAR_5 = FUNC_3 ();
 RBuffer *VAR_6 = FUNC_3 ();
 const ut8 VAR_7 = VAR_0;
 ut8 VAR_8[4];
 ut8 VAR_9[4];
 int VAR_10;

 if (!VAR_5 || !VAR_6) {
  FUNC_2 (VAR_5);
  FUNC_2 (VAR_6);
  return -1;
 }

 VAR_4 = FUNC_0 (VAR_1->max_rx_size, VAR_4);

 FUNC_6 (VAR_8, VAR_2);
 FUNC_6 (VAR_9, VAR_4);

 FUNC_1 (VAR_5, &VAR_7, 1);
 FUNC_1 (VAR_5, VAR_8, 4);
 FUNC_1 (VAR_5, VAR_9, 4);

 VAR_1->frame (VAR_5);

 if (VAR_1->send_request (VAR_1, VAR_5)) {
  goto fail;
 }

 if (VAR_1->get_reply (VAR_1, VAR_7, VAR_6)) {
  goto fail;
 }

 VAR_10 = FUNC_4 (VAR_6, 0, VAR_3, FUNC_5 (VAR_6));

 FUNC_2 (VAR_5);
 FUNC_2 (VAR_6);

 return VAR_10;

fail:
 FUNC_2 (VAR_5);
 FUNC_2 (VAR_6);
 return -1;
}
