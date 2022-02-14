
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {size_t count; } ;
struct ceph_options {int flags; scalar_t__ mount_timeout; scalar_t__ osd_idle_ttl; scalar_t__ osd_keepalive_timeout; scalar_t__ osd_request_timeout; int fsid; scalar_t__ key; scalar_t__ name; } ;
struct ceph_client {struct ceph_options* options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,scalar_t__,char*) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

int FUNC_5(struct seq_file *VAR_11, struct ceph_client *VAR_12,
         bool VAR_13)
{
 struct ceph_options *VAR_14 = VAR_12->options;
 size_t VAR_15 = VAR_11->count;

 if (VAR_14->name) {
  FUNC_4(VAR_11, "name=");
  FUNC_1(VAR_11, VAR_14->name, ", \t\n\\");
  FUNC_3(VAR_11, ',');
 }
 if (VAR_14->key)
  FUNC_4(VAR_11, "secret=<hidden>,");

 if (VAR_14->flags & VAR_2)
  FUNC_2(VAR_11, "fsid=%pU,", VAR_14->fsid);
 if (VAR_14->flags & VAR_6)
  FUNC_4(VAR_11, "noshare,");
 if (VAR_14->flags & VAR_3)
  FUNC_4(VAR_11, "nocrc,");
 if (VAR_14->flags & VAR_4)
  FUNC_4(VAR_11, "nocephx_require_signatures,");
 if (VAR_14->flags & VAR_5)
  FUNC_4(VAR_11, "nocephx_sign_messages,");
 if ((VAR_14->flags & VAR_7) == 0)
  FUNC_4(VAR_11, "notcp_nodelay,");
 if (VAR_13 && (VAR_14->flags & VAR_1))
  FUNC_4(VAR_11, "abort_on_full,");

 if (VAR_14->mount_timeout != VAR_0)
  FUNC_2(VAR_11, "mount_timeout=%d,",
      FUNC_0(VAR_14->mount_timeout) / 1000);
 if (VAR_14->osd_idle_ttl != VAR_8)
  FUNC_2(VAR_11, "osd_idle_ttl=%d,",
      FUNC_0(VAR_14->osd_idle_ttl) / 1000);
 if (VAR_14->osd_keepalive_timeout != VAR_9)
  FUNC_2(VAR_11, "osdkeepalivetimeout=%d,",
      FUNC_0(VAR_14->osd_keepalive_timeout) / 1000);
 if (VAR_14->osd_request_timeout != VAR_10)
  FUNC_2(VAR_11, "osd_request_timeout=%d,",
      FUNC_0(VAR_14->osd_request_timeout) / 1000);


 if (VAR_11->count != VAR_15)
  VAR_11->count--;

 return 0;
}
