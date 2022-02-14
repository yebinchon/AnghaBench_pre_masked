
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,int ) ;
 int FUNC_2 (struct trace_seq*,char) ;
 int FUNC_3 (struct trace_seq*,char*) ;

int FUNC_4(struct trace_seq *VAR_4)
{
 FUNC_3(VAR_4, "# compressed entry header\n");
 FUNC_3(VAR_4, "\ttype_len    :    5 bits\n");
 FUNC_3(VAR_4, "\ttime_delta  :   27 bits\n");
 FUNC_3(VAR_4, "\tarray       :   32 bits\n");
 FUNC_2(VAR_4, '\n');
 FUNC_1(VAR_4, "\tpadding     : type == %d\n",
    VAR_1);
 FUNC_1(VAR_4, "\ttime_extend : type == %d\n",
    VAR_2);
 FUNC_1(VAR_4, "\ttime_stamp : type == %d\n",
    VAR_3);
 FUNC_1(VAR_4, "\tdata max type_len  == %d\n",
    VAR_0);

 return !FUNC_0(VAR_4);
}
