
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void common_audit_data ;
typedef struct audit_buffer audit_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct audit_buffer*,void*) ;

void FUNC_4(struct common_audit_data *VAR_3,
 void (*VAR_4)(struct audit_buffer *, void *),
 void (*VAR_5)(struct audit_buffer *, void *))
{
 struct audit_buffer *VAR_6;

 if (VAR_3 == ((void*)0))
  return;

 VAR_6 = FUNC_2(FUNC_0(), VAR_1 | VAR_2,
        VAR_0);

 if (VAR_6 == ((void*)0))
  return;

 if (VAR_4)
  VAR_4(VAR_6, VAR_3);

 FUNC_3(VAR_6, VAR_3);

 if (VAR_5)
  VAR_5(VAR_6, VAR_3);

 FUNC_1(VAR_6);
}
