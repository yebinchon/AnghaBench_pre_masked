
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {int dummy; } ;
struct ima_template_entry {int pcr; int digest; } ;
typedef int digest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ima_template_entry*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,int) ;

int FUNC_9(struct ima_template_entry *VAR_5, int VAR_6,
      const char *VAR_7, struct inode *VAR_8,
      const unsigned char *VAR_9)
{
 u8 VAR_10[VAR_3];
 const char *VAR_11 = "hash_added";
 char VAR_12[VAR_0];
 int VAR_13 = 1;
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_6(&VAR_4);
 if (!VAR_6) {
  FUNC_4(VAR_10, VAR_5->digest, sizeof(VAR_10));
  if (FUNC_1(VAR_10, VAR_5->pcr)) {
   VAR_11 = "hash_exists";
   VAR_14 = -VAR_2;
   goto out;
  }
 }

 VAR_14 = FUNC_0(VAR_5, 1);
 if (VAR_14 < 0) {
  VAR_11 = "ENOMEM";
  VAR_13 = 0;
  goto out;
 }

 if (VAR_6)
  FUNC_5(VAR_10, 0xff, sizeof(VAR_10));

 VAR_15 = FUNC_2(VAR_10, VAR_5->pcr);
 if (VAR_15 != 0) {
  FUNC_8(VAR_12, VAR_0, "TPM_error(%d)",
    VAR_15);
  VAR_11 = VAR_12;
  VAR_13 = 0;
 }
out:
 FUNC_7(&VAR_4);
 FUNC_3(VAR_1, VAR_8, VAR_9,
       VAR_7, VAR_11, VAR_14, VAR_13);
 return VAR_14;
}
