
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
typedef int WORD ;
struct TYPE_8__ {int style; int top_item; int page_size; int width; int column_width; int nb_items; int horz_extent; int horz_pos; int self; } ;
struct TYPE_7__ {int cbSize; int nTrackPos; void* fMask; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static LRESULT FUNC_3( LB_DESCR *VAR_5, WORD VAR_6, WORD VAR_7 )
{
    SCROLLINFO VAR_8;
    INT VAR_9;

    if (VAR_5->style & VAR_0)
    {
        switch(VAR_6)
        {
        case 134:
            FUNC_2( VAR_5, VAR_5->top_item-VAR_5->page_size,
                                VAR_4 );
            break;
        case 133:
            FUNC_2( VAR_5, VAR_5->top_item+VAR_5->page_size,
                                VAR_4 );
            break;
        case 132:
            VAR_9 = VAR_5->width / VAR_5->column_width;
            if (VAR_9 < 1) VAR_9 = 1;
            FUNC_2( VAR_5,
                             VAR_5->top_item - VAR_9 * VAR_5->page_size, VAR_4 );
            break;
        case 131:
            VAR_9 = VAR_5->width / VAR_5->column_width;
            if (VAR_9 < 1) VAR_9 = 1;
            FUNC_2( VAR_5,
                             VAR_5->top_item + VAR_9 * VAR_5->page_size, VAR_4 );
            break;
        case 129:
            FUNC_2( VAR_5, VAR_7*VAR_5->page_size, VAR_4 );
            break;
        case 128:
            VAR_8.cbSize = sizeof(VAR_8);
            VAR_8.fMask = VAR_3;
            FUNC_0( VAR_5->self, VAR_2, &VAR_8 );
            FUNC_2( VAR_5, VAR_8.nTrackPos*VAR_5->page_size,
                                VAR_4 );
            break;
        case 135:
            FUNC_2( VAR_5, 0, VAR_4 );
            break;
        case 130:
            FUNC_2( VAR_5, VAR_5->nb_items, VAR_4 );
            break;
        }
    }
    else if (VAR_5->horz_extent)
    {
        switch(VAR_6)
        {
        case 134:
            FUNC_1( VAR_5, VAR_5->horz_pos - 1 );
            break;
        case 133:
            FUNC_1( VAR_5, VAR_5->horz_pos + 1 );
            break;
        case 132:
            FUNC_1( VAR_5,
                                      VAR_5->horz_pos - VAR_5->width );
            break;
        case 131:
            FUNC_1( VAR_5,
                                      VAR_5->horz_pos + VAR_5->width );
            break;
        case 129:
            FUNC_1( VAR_5, VAR_7 );
            break;
        case 128:
            VAR_8.cbSize = sizeof(VAR_8);
            VAR_8.fMask = VAR_3;
            FUNC_0( VAR_5->self, VAR_1, &VAR_8 );
            FUNC_1( VAR_5, VAR_8.nTrackPos );
            break;
        case 135:
            FUNC_1( VAR_5, 0 );
            break;
        case 130:
            FUNC_1( VAR_5,
                                      VAR_5->horz_extent - VAR_5->width );
            break;
        }
    }
    return 0;
}
