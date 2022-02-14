
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct gport {scalar_t__ (* get_reply ) (struct gport*,int const,int *) ;scalar_t__ (* send_request ) (struct gport*,int *) ;int (* frame ) (int *) ;} ;
typedef int RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int const*,int ,int,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct gport*,int *) ;
 scalar_t__ FUNC_7 (struct gport*,int const,int *) ;

__attribute__((used)) static int FUNC_8 (struct gport *VAR_1) {
 if (!VAR_1) {
  return -1;
 }
 RBuffer *VAR_2 = FUNC_3 ();
 RBuffer *VAR_3 = FUNC_3 ();
 const ut8 VAR_4 = VAR_0;
 const ut8 VAR_5 = 0;

 if (!VAR_2 || !VAR_3) {
  goto fail;
 }

 FUNC_0 (VAR_2, &VAR_4, 1);
 FUNC_0 (VAR_2, &VAR_5, 1);

 VAR_1->frame (VAR_2);

 if (VAR_1->send_request (VAR_1, VAR_2)) {
  goto fail;
 }

 if (VAR_1->get_reply (VAR_1, VAR_4, VAR_3)) {
  goto fail;
 }

 ut64 VAR_6;
 const ut8 *VAR_7 = FUNC_1 (VAR_3, &VAR_6);
 FUNC_4 (((void*)0), 0, VAR_7, VAR_6, 16, 1, 1);

 FUNC_2 (VAR_2);
 FUNC_2 (VAR_3);

 return 0;

fail:
 FUNC_2 (VAR_2);
 FUNC_2 (VAR_3);
 return -1;
}
