
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file_op {int * dst_file; int * dst_path; int * src_file; int * src_path; int * src_root; } ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ Flags; scalar_t__ Win32Error; int * Target; int * Source; } ;
typedef int * PWSTR ;
typedef TYPE_1__ FILEPATHS_W ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int *) ;
 unsigned int FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static BOOL FUNC_6( const struct file_op *VAR_2, FILEPATHS_W *VAR_3 )
{
    unsigned int VAR_4 = 1, VAR_5 = 1;
    WCHAR *VAR_6 = (PWSTR)VAR_3->Source, *VAR_7 = (PWSTR)VAR_3->Target;

    if (VAR_2->src_root) VAR_4 += FUNC_5(VAR_2->src_root) + 1;
    if (VAR_2->src_path) VAR_4 += FUNC_5(VAR_2->src_path) + 1;
    if (VAR_2->src_file) VAR_4 += FUNC_5(VAR_2->src_file) + 1;
    if (VAR_2->dst_path) VAR_5 += FUNC_5(VAR_2->dst_path) + 1;
    if (VAR_2->dst_file) VAR_5 += FUNC_5(VAR_2->dst_file) + 1;
    VAR_4 *= sizeof(WCHAR);
    VAR_5 *= sizeof(WCHAR);

    if (!VAR_6 || FUNC_3( FUNC_0(), 0, VAR_6 ) < VAR_4 )
    {
        FUNC_2( FUNC_0(), 0, VAR_6 );
        VAR_3->Source = VAR_6 = FUNC_1( FUNC_0(), 0, VAR_4 );
    }
    if (!VAR_7 || FUNC_3( FUNC_0(), 0, VAR_7 ) < VAR_5 )
    {
        FUNC_2( FUNC_0(), 0, VAR_7 );
        VAR_3->Target = VAR_7 = FUNC_1( FUNC_0(), 0, VAR_5 );
    }
    if (!VAR_6 || !VAR_7) return VAR_0;
    FUNC_4( VAR_6, VAR_2->src_root, VAR_2->src_path, VAR_2->src_file );
    FUNC_4( VAR_7, ((void*)0), VAR_2->dst_path, VAR_2->dst_file );
    VAR_3->Win32Error = 0;
    VAR_3->Flags = 0;
    return VAR_1;
}
