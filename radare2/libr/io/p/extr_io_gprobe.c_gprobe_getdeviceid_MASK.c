
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ut8 ;
struct gport {scalar_t__ (* get_reply ) (struct gport*,int const,int *) ;scalar_t__ (* send_request ) (struct gport*,int *) ;int (* frame ) (int *) ;} ;
typedef int RBuffer ;


 int const VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct gport*,int *) ;
 scalar_t__ FUNC_8 (struct gport*,int const,int *) ;

__attribute__((used)) static int FUNC_9 (struct gport *VAR_1, ut8 VAR_2) {
 if (!VAR_1) {
  return -1;
 }
 RBuffer *VAR_3 = FUNC_4 ();
 RBuffer *VAR_4 = FUNC_4 ();
 const ut8 VAR_5 = VAR_0;

 if (!VAR_3 || !VAR_4) {
  goto fail;
 }

 FUNC_2 (VAR_3, &VAR_5, 1);
 FUNC_2 (VAR_3, &VAR_2, 1);

 VAR_1->frame (VAR_3);

 if (VAR_1->send_request (VAR_1, VAR_3)) {
  goto fail;
 }

 if (VAR_1->get_reply (VAR_1, VAR_5, VAR_4)) {
  goto fail;
 }

 char *VAR_6 = FUNC_5 (VAR_4);
 if (VAR_6) {
  FUNC_1 ("%s\n", VAR_6);
  FUNC_0 (VAR_6);
 }

 FUNC_3 (VAR_3);
 FUNC_3 (VAR_4);

 return 0;

fail:
 FUNC_3 (VAR_3);
 FUNC_3 (VAR_4);
 return -1;
}
