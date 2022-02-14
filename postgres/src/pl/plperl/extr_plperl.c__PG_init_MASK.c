
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int plperl_proc_ptr ;
typedef int plperl_proc_key ;
typedef int plperl_interp_desc ;
typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;


 int FUNC_0 (char*,int ,int *,int *,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,int ,int *,int *,int *,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*,int,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 () ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

void
FUNC_9(void)
{
 static bool VAR_14 = 0;
 HASHCTL VAR_15;

 if (VAR_14)
  return;




 FUNC_7(VAR_5);




 FUNC_0("plperl.use_strict",
        FUNC_4("If true, trusted and untrusted Perl code will be compiled in strict mode."),
        ((void*)0),
        &VAR_13,
        0,
        VAR_4, 0,
        ((void*)0), ((void*)0), ((void*)0));







 FUNC_1("plperl.on_init",
          FUNC_4("Perl initialization code to execute when a Perl interpreter is initialized."),
          ((void*)0),
          &VAR_8,
          ((void*)0),
          VAR_2, 0,
          ((void*)0), ((void*)0), ((void*)0));
 FUNC_1("plperl.on_plperl_init",
          FUNC_4("Perl initialization code to execute once when plperl is first used."),
          ((void*)0),
          &VAR_9,
          ((void*)0),
          VAR_3, 0,
          ((void*)0), ((void*)0), ((void*)0));

 FUNC_1("plperl.on_plperlu_init",
          FUNC_4("Perl initialization code to execute once when plperlu is first used."),
          ((void*)0),
          &VAR_10,
          ((void*)0),
          VAR_3, 0,
          ((void*)0), ((void*)0), ((void*)0));

 FUNC_2("plperl");




 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.keysize = sizeof(Oid);
 VAR_15.entrysize = sizeof(plperl_interp_desc);
 VAR_7 = FUNC_5("PL/Perl interpreters",
          8,
          &VAR_15,
          VAR_1 | VAR_0);

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.keysize = sizeof(plperl_proc_key);
 VAR_15.entrysize = sizeof(plperl_proc_ptr);
 VAR_12 = FUNC_5("PL/Perl procedures",
           32,
           &VAR_15,
           VAR_1 | VAR_0);




 FUNC_3(VAR_11);




 VAR_6 = FUNC_8();

 VAR_14 = 1;
}
