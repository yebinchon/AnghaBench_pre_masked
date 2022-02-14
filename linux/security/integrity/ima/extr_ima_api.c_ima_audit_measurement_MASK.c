
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct integrity_iint_cache {int flags; TYPE_1__* ima_hash; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {size_t algo; int length; int * digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct audit_buffer*) ;
 int FUNC_5 (struct audit_buffer*,unsigned char const*) ;
 char** VAR_3 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int,int ) ;

void FUNC_9(struct integrity_iint_cache *VAR_4,
      const unsigned char *VAR_5)
{
 struct audit_buffer *VAR_6;
 char *VAR_7;
 const char *VAR_8 = VAR_3[VAR_4->ima_hash->algo];
 int VAR_9;

 if (VAR_4->flags & VAR_2)
  return;

 VAR_7 = FUNC_8((VAR_4->ima_hash->length * 2) + 1, VAR_1);
 if (!VAR_7)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_4->ima_hash->length; VAR_9++)
  FUNC_6(VAR_7 + (VAR_9 * 2), VAR_4->ima_hash->digest[VAR_9]);
 VAR_7[VAR_9 * 2] = '\0';

 VAR_6 = FUNC_3(FUNC_0(), VAR_1,
        VAR_0);
 if (!VAR_6)
  goto out;

 FUNC_2(VAR_6, "file=");
 FUNC_5(VAR_6, VAR_5);
 FUNC_2(VAR_6, " hash=\"%s:%s\"", VAR_8, VAR_7);

 FUNC_4(VAR_6);
 FUNC_1(VAR_6);

 VAR_4->flags |= VAR_2;
out:
 FUNC_7(VAR_7);
 return;
}
