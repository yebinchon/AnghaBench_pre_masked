
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_4__ {int uid; } ;
struct TYPE_3__ {unsigned char const* s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct audit_buffer*) ;
 int FUNC_4 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct audit_buffer*) ;
 int FUNC_7 (struct audit_buffer*,unsigned char const*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 unsigned char const* FUNC_10 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int ) ;

void FUNC_12(int VAR_5, struct inode *VAR_6,
    const unsigned char *VAR_7, const char *VAR_8,
    const char *VAR_9, int VAR_10, int VAR_11)
{
 struct audit_buffer *VAR_12;
 char VAR_13[VAR_1];

 if (!VAR_4 && VAR_11 == 1)
  return;

 VAR_12 = FUNC_5(FUNC_0(), VAR_0, VAR_5);
 FUNC_4(VAR_12, "pid=%d uid=%u auid=%u ses=%u",
    FUNC_11(VAR_2),
    FUNC_9(&VAR_3, FUNC_8()->uid),
    FUNC_9(&VAR_3, FUNC_1(VAR_2)),
    FUNC_2(VAR_2));
 FUNC_6(VAR_12);
 FUNC_4(VAR_12, " op=%s cause=%s comm=", VAR_8, VAR_9);
 FUNC_7(VAR_12, FUNC_10(VAR_13, VAR_2));
 if (VAR_7) {
  FUNC_4(VAR_12, " name=");
  FUNC_7(VAR_12, VAR_7);
 }
 if (VAR_6) {
  FUNC_4(VAR_12, " dev=");
  FUNC_7(VAR_12, VAR_6->i_sb->s_id);
  FUNC_4(VAR_12, " ino=%lu", VAR_6->i_ino);
 }
 FUNC_4(VAR_12, " res=%d", !VAR_10);
 FUNC_3(VAR_12);
}
