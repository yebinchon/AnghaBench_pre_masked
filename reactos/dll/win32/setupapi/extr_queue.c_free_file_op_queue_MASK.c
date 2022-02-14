
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_op_queue {struct file_op* head; } ;
struct file_op {scalar_t__ dst_file; scalar_t__ src_file; struct file_op* next; scalar_t__ dst_sd; struct file_op* dst_path; struct file_op* src_tag; struct file_op* src_descr; struct file_op* src_path; struct file_op* src_root; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct file_op*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3( struct file_op_queue *VAR_0 )
{
    struct file_op *VAR_1, *VAR_2 = VAR_0->head;

    while( VAR_2 )
    {
        FUNC_1( FUNC_0(), 0, VAR_2->src_root );
        FUNC_1( FUNC_0(), 0, VAR_2->src_path );
        FUNC_1( FUNC_0(), 0, VAR_2->src_file );
        FUNC_1( FUNC_0(), 0, VAR_2->src_descr );
        FUNC_1( FUNC_0(), 0, VAR_2->src_tag );
        FUNC_1( FUNC_0(), 0, VAR_2->dst_path );
        if (VAR_2->dst_sd) FUNC_2( VAR_2->dst_sd);
        if (VAR_2->dst_file != VAR_2->src_file) FUNC_1( FUNC_0(), 0, VAR_2->dst_file );
        VAR_1 = VAR_2;
        VAR_2 = VAR_2->next;
        FUNC_1( FUNC_0(), 0, VAR_1 );
    }
}
