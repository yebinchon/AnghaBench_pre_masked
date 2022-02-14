
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* from; char const* to; } ;
typedef TYPE_1__ substring_t ;
struct ceph_options {int flags; void* osd_request_timeout; void* mount_timeout; void* osd_idle_ttl; void* osd_keepalive_timeout; void* key; void* name; int fsid; int my_addr; int num_mon; int * mon_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ceph_options* FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;







 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (struct ceph_options*) ;
 int FUNC_5 (char const*,char const*,int *,int,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (void*,char const*) ;
 int * FUNC_8 (int,int,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (char const*,char const*,int ) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_1__*,int*) ;
 int FUNC_13 (char*,int ,TYPE_1__*) ;
 void* FUNC_14 (int) ;
 int VAR_21 ;
 int FUNC_15 (char const*,int *) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char**,char*) ;

struct ceph_options *
FUNC_19(char *VAR_22, const char *VAR_23,
   const char *VAR_24,
   int (*VAR_25)(char *VAR_26, void *VAR_27),
   void *VAR_28)
{
 struct ceph_options *VAR_29;
 const char *VAR_30;
 int VAR_31 = -VAR_15;
 substring_t VAR_32[VAR_18];

 VAR_29 = FUNC_11(sizeof(*VAR_29), VAR_16);
 if (!VAR_29)
  return FUNC_1(-VAR_15);
 VAR_29->mon_addr = FUNC_8(VAR_0, sizeof(*VAR_29->mon_addr),
    VAR_16);
 if (!VAR_29->mon_addr)
  goto out;

 FUNC_6("parse_options %p options '%s' dev_name '%s'\n", VAR_29, VAR_22,
      VAR_23);


 VAR_29->flags = VAR_3;
 VAR_29->osd_keepalive_timeout = VAR_12;
 VAR_29->mount_timeout = VAR_1;
 VAR_29->osd_idle_ttl = VAR_11;
 VAR_29->osd_request_timeout = VAR_13;



 VAR_31 = FUNC_5(VAR_23, VAR_24, VAR_29->mon_addr,
        VAR_0, &VAR_29->num_mon);
 if (VAR_31 < 0)
  goto out;


 while ((VAR_30 = FUNC_18(&VAR_22, ",")) != ((void*)0)) {
  int VAR_33, VAR_34;
  if (!*VAR_30)
   continue;
  VAR_31 = -VAR_14;
  VAR_33 = FUNC_13((char *)VAR_30, VAR_21, VAR_32);
  if (VAR_33 < 0 && VAR_25) {

   VAR_31 = VAR_25((char *)VAR_30, VAR_28);
   if (VAR_31 < 0) {
    FUNC_16("bad option at '%s'\n", VAR_30);
    goto out;
   }
   continue;
  }
  if (VAR_33 < VAR_19) {
   VAR_31 = FUNC_12(&VAR_32[0], &VAR_34);
   if (VAR_31 < 0) {
    FUNC_16("bad option arg (not int) at '%s'\n", VAR_30);
    goto out;
   }
   FUNC_6("got int token %d val %d\n", VAR_33, VAR_34);
  } else if (VAR_33 > VAR_19 && VAR_33 < VAR_20) {
   FUNC_6("got string token %d val %s\n", VAR_33,
        VAR_32[0].from);
  } else {
   FUNC_6("got token %d\n", VAR_33);
  }
  switch (VAR_33) {
  case 143:
   VAR_31 = FUNC_5(VAR_32[0].from,
          VAR_32[0].to,
          &VAR_29->my_addr,
          1, ((void*)0));
   if (VAR_31 < 0)
    goto out;
   VAR_29->flags |= VAR_5;
   break;

  case 144:
   VAR_31 = FUNC_15(VAR_32[0].from, &VAR_29->fsid);
   if (VAR_31 == 0)
    VAR_29->flags |= VAR_4;
   break;
  case 140:
   FUNC_9(VAR_29->name);
   VAR_29->name = FUNC_10(VAR_32[0].from,
           VAR_32[0].to-VAR_32[0].from,
           VAR_16);
   if (!VAR_29->name) {
    VAR_31 = -VAR_15;
    goto out;
   }
   break;
  case 130:
   FUNC_2(VAR_29->key);
   FUNC_9(VAR_29->key);

          VAR_29->key = FUNC_11(sizeof(*VAR_29->key), VAR_16);
   if (!VAR_29->key) {
    VAR_31 = -VAR_15;
    goto out;
   }
   VAR_31 = FUNC_3(VAR_29->key, VAR_32[0].from);
   if (VAR_31 < 0)
    goto out;
   break;
  case 142:
   FUNC_2(VAR_29->key);
   FUNC_9(VAR_29->key);

          VAR_29->key = FUNC_11(sizeof(*VAR_29->key), VAR_16);
   if (!VAR_29->key) {
    VAR_31 = -VAR_15;
    goto out;
   }
   VAR_31 = FUNC_7(VAR_29->key, VAR_32[0].from);
   if (VAR_31 < 0)
    goto out;
   break;


  case 131:
   FUNC_17("ignoring deprecated osdtimeout option\n");
   break;
  case 132:

   if (VAR_34 < 1 || VAR_34 > VAR_17 / 1000) {
    FUNC_16("osdkeepalive out of range\n");
    VAR_31 = -VAR_14;
    goto out;
   }
   VAR_29->osd_keepalive_timeout =
     FUNC_14(VAR_34 * 1000);
   break;
  case 134:

   if (VAR_34 < 1 || VAR_34 > VAR_17 / 1000) {
    FUNC_16("osd_idle_ttl out of range\n");
    VAR_31 = -VAR_14;
    goto out;
   }
   VAR_29->osd_idle_ttl = FUNC_14(VAR_34 * 1000);
   break;
  case 141:

   if (VAR_34 < 0 || VAR_34 > VAR_17 / 1000) {
    FUNC_16("mount_timeout out of range\n");
    VAR_31 = -VAR_14;
    goto out;
   }
   VAR_29->mount_timeout = FUNC_14(VAR_34 * 1000);
   break;
  case 133:

   if (VAR_34 < 0 || VAR_34 > VAR_17 / 1000) {
    FUNC_16("osd_request_timeout out of range\n");
    VAR_31 = -VAR_14;
    goto out;
   }
   VAR_29->osd_request_timeout = FUNC_14(VAR_34 * 1000);
   break;

  case 129:
   VAR_29->flags &= ~VAR_9;
   break;
  case 136:
   VAR_29->flags |= VAR_9;
   break;

  case 145:
   VAR_29->flags &= ~VAR_6;
   break;
  case 137:
   VAR_29->flags |= VAR_6;
   break;

  case 147:
   VAR_29->flags &= ~VAR_7;
   break;
  case 139:
   VAR_29->flags |= VAR_7;
   break;
  case 146:
   VAR_29->flags &= ~VAR_8;
   break;
  case 138:
   VAR_29->flags |= VAR_8;
   break;

  case 128:
   VAR_29->flags |= VAR_10;
   break;
  case 135:
   VAR_29->flags &= ~VAR_10;
   break;

  case 148:
   VAR_29->flags |= VAR_2;
   break;

  default:
   FUNC_0(VAR_33);
  }
 }


 return VAR_29;

out:
 FUNC_4(VAR_29);
 return FUNC_1(VAR_31);
}
