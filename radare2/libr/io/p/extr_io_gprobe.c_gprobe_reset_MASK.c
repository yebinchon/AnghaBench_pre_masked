
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ut8 ;
struct gport {scalar_t__ (* get_reply ) (struct gport*,int ,int *) ;scalar_t__ (* send_request ) (struct gport*,int *) ;int (* frame ) (int *) ;} ;
typedef int RBuffer ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (struct gport*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct gport*,int *) ;
 scalar_t__ FUNC_6 (struct gport*,int ,int *) ;

__attribute__((used)) static int FUNC_7 (struct gport *VAR_2, ut8 VAR_3) {
 if (!VAR_2) {
  return -1;
 }
 RBuffer *VAR_4 = FUNC_2 ();
 RBuffer *VAR_5 = FUNC_2 ();
 const ut8 VAR_6 = VAR_1;

 if (!VAR_4 || !VAR_5) {
  goto fail;
 }

 FUNC_0 (VAR_4, &VAR_6, 1);
 FUNC_0 (VAR_4, &VAR_3, 1);

 VAR_2->frame (VAR_4);

 FUNC_3 (VAR_2);

 if (VAR_2->send_request (VAR_2, VAR_4)) {
  goto fail;
 }

 if (VAR_2->get_reply (VAR_2, VAR_0, VAR_5)) {
  goto fail;
 }

 FUNC_1 (VAR_4);
 FUNC_1 (VAR_5);

 return 0;

fail:
 FUNC_1 (VAR_4);
 FUNC_1 (VAR_5);
 return -1;
}
