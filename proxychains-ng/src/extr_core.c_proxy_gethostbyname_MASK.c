
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct hostent {char** h_addr_list; char** h_aliases; int h_length; int h_addrtype; } ;
struct gethostbyname_data {char** resolved_addr_p; scalar_t__ resolved_addr; struct hostent hostent_space; } ;
struct TYPE_14__ {scalar_t__ as_int; } ;
typedef TYPE_5__ ip_type4 ;
typedef scalar_t__ in_addr_t ;
typedef int buff ;
struct TYPE_17__ {scalar_t__ as_int; } ;
struct TYPE_12__ {scalar_t__ as_int; } ;
struct TYPE_13__ {TYPE_3__ v4; } ;
struct TYPE_16__ {TYPE_4__ addr; } ;
struct TYPE_10__ {scalar_t__ as_int; } ;
struct TYPE_11__ {TYPE_1__ v4; } ;
struct TYPE_15__ {TYPE_2__ addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_9__ FUNC_2 (char*,int ) ;
 int FUNC_3 (struct gethostbyname_data*,char*) ;
 int FUNC_4 (char*,int) ;
 TYPE_5__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

struct hostent *FUNC_9(const char *VAR_3, struct gethostbyname_data* VAR_4) {
 FUNC_1();
 char VAR_5[256];

 VAR_4->resolved_addr_p[0] = (char *) &VAR_4->resolved_addr;
 VAR_4->resolved_addr_p[1] = ((void*)0);

 VAR_4->hostent_space.h_addr_list = VAR_4->resolved_addr_p;

 VAR_4->hostent_space.h_aliases = &VAR_4->resolved_addr_p[1];

 VAR_4->resolved_addr = 0;
 VAR_4->hostent_space.h_addrtype = VAR_0;
 VAR_4->hostent_space.h_length = sizeof(in_addr_t);

 FUNC_4(VAR_5, sizeof(VAR_5));

 if(!FUNC_7(VAR_5, VAR_3)) {
  VAR_4->resolved_addr = FUNC_6(VAR_5);
  if(VAR_4->resolved_addr == (in_addr_t) (-1))
   VAR_4->resolved_addr = (in_addr_t) (VAR_2.addr.v4.as_int);
  goto retname;
 }


 ip_type4 VAR_6 = FUNC_5(VAR_3);
 if(VAR_6.as_int != VAR_1.addr.v4.as_int) {
  VAR_4->resolved_addr = VAR_6.as_int;
  goto retname;
 }

 VAR_4->resolved_addr = FUNC_2((char*) VAR_3, FUNC_8(VAR_3)).as_int;
 if(VAR_4->resolved_addr == (in_addr_t) VAR_1.addr.v4.as_int) return ((void*)0);

 retname:

 FUNC_3(VAR_4, (char*) VAR_3);

 FUNC_0("return hostent space\n");

 return &VAR_4->hostent_space;
}
