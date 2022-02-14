
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int flags; } ;
typedef int key_serial_t ;
typedef int key_ref_t ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct key* FUNC_3 (int ) ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

long FUNC_7(key_serial_t VAR_5)
{
 key_ref_t VAR_6;
 struct key *VAR_7;
 long VAR_8;

 VAR_6 = FUNC_5(VAR_5, 0, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  if (VAR_8 != -VAR_0)
   goto error;
  VAR_6 = FUNC_5(VAR_5, 0, VAR_3);
  if (FUNC_0(VAR_6)) {
   VAR_8 = FUNC_1(VAR_6);
   goto error;
  }
 }

 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = 0;
 if (FUNC_6(VAR_2, &VAR_7->flags))
  VAR_8 = -VAR_1;
 else
  FUNC_4(VAR_7);

 FUNC_2(VAR_6);
error:
 return VAR_8;
}
