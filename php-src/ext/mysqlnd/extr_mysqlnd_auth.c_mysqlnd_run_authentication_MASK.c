
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int zend_ulong ;
typedef char zend_uchar ;
typedef scalar_t__ zend_bool ;
struct TYPE_17__ {char* (* get_auth_data ) (int *,size_t*,TYPE_6__* const,char const* const,char const* const,size_t const,char*,size_t,int const* const,int ,int const) ;} ;
struct st_mysqlnd_authentication_plugin {TYPE_2__ methods; } ;
typedef scalar_t__ enum_func_status ;
struct TYPE_16__ {char* s; size_t l; } ;
struct TYPE_21__ {scalar_t__ const persistent; TYPE_4__* m; TYPE_13__* error_info; TYPE_3__* protocol_frame_codec; TYPE_1__ authentication_plugin_data; } ;
struct TYPE_20__ {size_t l; char* s; } ;
struct TYPE_19__ {int (* set_client_option ) (TYPE_6__* const,int ,char*) ;struct st_mysqlnd_authentication_plugin* (* fetch_auth_plugin_by_name ) (char*) ;} ;
struct TYPE_18__ {int data; } ;
struct TYPE_15__ {scalar_t__ error_no; } ;
typedef TYPE_5__ MYSQLND_STRING ;
typedef int MYSQLND_SESSION_OPTIONS ;
typedef TYPE_6__ MYSQLND_CONN_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 char const* const VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_13__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_13__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (char*,scalar_t__ const) ;
 char* FUNC_10 (size_t,scalar_t__ const) ;
 char* FUNC_11 (char const* const,scalar_t__ const) ;
 scalar_t__ FUNC_12 (TYPE_6__* const,char const* const,int ,char const* const,size_t const,char const* const,size_t const,scalar_t__ const,scalar_t__,char*,char*,size_t,char**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_13 (TYPE_6__* const,char const* const,char const* const,size_t const,char const* const,size_t const,int const* const,int const,unsigned int const,scalar_t__,char*,struct st_mysqlnd_authentication_plugin*,char*,size_t,char*,size_t,char**,size_t*,char**,size_t*) ;
 int FUNC_14 (int *,int ,char*,char*) ;
 int FUNC_15 (char const* const) ;
 struct st_mysqlnd_authentication_plugin* FUNC_16 (char*) ;
 char* FUNC_17 (int *,size_t*,TYPE_6__* const,char const* const,char const* const,size_t const,char*,size_t,int const* const,int ,int const) ;
 int FUNC_18 (TYPE_6__* const,int ,char*) ;

enum_func_status
FUNC_19(
   MYSQLND_CONN_DATA * const VAR_9,
   const char * const VAR_10,
   const char * const VAR_11,
   const size_t VAR_12,
   const char * const VAR_13,
   const size_t VAR_14,
   const MYSQLND_STRING VAR_15,
   const char * const VAR_16,
   const unsigned int VAR_17,
   const MYSQLND_SESSION_OPTIONS * const VAR_18,
   const zend_ulong VAR_19,
   const zend_bool VAR_20,
   const zend_bool VAR_21
   )
{
 enum_func_status VAR_22 = VAR_2;
 zend_bool VAR_23 = VAR_7;

 char * VAR_24 = ((void*)0);
 size_t VAR_25 = 0;
 char * VAR_26 = ((void*)0);
 zend_uchar * VAR_27;
 size_t VAR_28;

 FUNC_0("mysqlnd_run_authentication");

 VAR_28 = VAR_15.l;
 VAR_27 = FUNC_8(VAR_28 + 1);
 if (!VAR_27) {
  goto end;
 }
 FUNC_6(VAR_27, VAR_15.s, VAR_28);
 VAR_27[VAR_28] = '\0';

 VAR_26 = FUNC_11(VAR_16? VAR_16 : VAR_4, VAR_3);
 if (!VAR_26) {
  goto end;
 }

 do {
  struct st_mysqlnd_authentication_plugin * VAR_29 = VAR_9->m->fetch_auth_plugin_by_name(VAR_26);

  if (!VAR_29) {
   if (VAR_23) {
    FUNC_9(VAR_26, VAR_3);
    VAR_26 = FUNC_11(VAR_4, VAR_3);
   } else {
    FUNC_14(((void*)0), VAR_1, "The server requested authentication method unknown to the client [%s]", VAR_26);
    FUNC_3(VAR_9->error_info, VAR_0, VAR_8, "The server requested authentication method unknown to the client");
    goto end;
   }
  }


  {
   zend_uchar * VAR_30 = ((void*)0);
   size_t VAR_31 = 0;
   zend_uchar * VAR_32 = ((void*)0);
   size_t VAR_33 = 0;

   VAR_24 = ((void*)0);
   VAR_25 = 0;

   if (VAR_9->authentication_plugin_data.s) {
    FUNC_9(VAR_9->authentication_plugin_data.s, VAR_9->persistent);
    VAR_9->authentication_plugin_data.s = ((void*)0);
   }
   VAR_9->authentication_plugin_data.l = VAR_28;
   VAR_9->authentication_plugin_data.s = FUNC_10(VAR_9->authentication_plugin_data.l, VAR_9->persistent);
   if (!VAR_9->authentication_plugin_data.s) {
    FUNC_4(VAR_9->error_info);
    goto end;
   }
   FUNC_6(VAR_9->authentication_plugin_data.s, VAR_27, VAR_28);

   FUNC_1("salt(%d)=[%.*s]", VAR_28, VAR_28, VAR_27);

   if (VAR_29) {
    VAR_32 = VAR_29->methods.get_auth_data(
     ((void*)0), &VAR_33, VAR_9, VAR_10, VAR_11,
     VAR_12, VAR_27, VAR_28,
     VAR_18, VAR_9->protocol_frame_codec->data,
     VAR_19);
   }

   if (VAR_9->error_info->error_no) {
    goto end;
   }
   if (VAR_3 == VAR_21) {
    VAR_22 = FUNC_13(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_19,
           VAR_17,
           VAR_23,
           VAR_26,
           VAR_29, VAR_27, VAR_28,
           VAR_32, VAR_33,
           &VAR_24, &VAR_25,
           &VAR_30, &VAR_31
           );
   } else {
    VAR_22 = FUNC_12(VAR_9, VAR_10, FUNC_15(VAR_10), VAR_11, VAR_12, VAR_13, VAR_14, VAR_20,
              VAR_23,
              VAR_26,
              VAR_32, VAR_33,
              &VAR_24, &VAR_25,
              &VAR_30, &VAR_31
             );
   }
   VAR_23 = VAR_3;
   FUNC_5(VAR_32);

   FUNC_1("switch_to_auth_protocol=%s", VAR_24? VAR_24:"n/a");
   if (VAR_26 && VAR_24) {
    FUNC_7(VAR_26);
    VAR_26 = VAR_24;
   }

   if (VAR_27) {
    FUNC_7(VAR_27);
   }
   VAR_28 = VAR_31;
   VAR_27 = VAR_30;
  }
  FUNC_1("conn->error_info->error_no = %d", VAR_9->error_info->error_no);
 } while (VAR_22 == VAR_2 && VAR_9->error_info->error_no == 0 && VAR_24 != ((void*)0));

 if (VAR_22 == VAR_6) {
  FUNC_1("saving requested_protocol=%s", VAR_26);
  VAR_9->m->set_client_option(VAR_9, VAR_5, VAR_26);
 }
end:
 if (VAR_27) {
  FUNC_7(VAR_27);
 }
 if (VAR_26) {
  FUNC_7(VAR_26);
 }

 FUNC_2(VAR_22);
}
