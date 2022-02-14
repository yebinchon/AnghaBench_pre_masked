
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_declaration {int dummy; } ;
struct ddraw {int numConvertedDecls; int declArraySize; struct FvfToDecl* decls; int wined3d_device; } ;
struct FvfToDecl {scalar_t__ fvf; struct wined3d_vertex_declaration* decl; } ;
typedef int convertedDecls ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_1 ;
 struct FvfToDecl* FUNC_1 (struct FvfToDecl*,unsigned int) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (struct FvfToDecl*,struct FvfToDecl*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,struct ddraw*,int *,struct wined3d_vertex_declaration**) ;
 int FUNC_5 (struct wined3d_vertex_declaration*) ;

struct wined3d_vertex_declaration *FUNC_6(struct ddraw *VAR_2, DWORD VAR_3)
{
    struct wined3d_vertex_declaration *VAR_4 = ((void*)0);
    HRESULT VAR_5;
    int VAR_6, VAR_7, VAR_8;
    struct FvfToDecl *VAR_9 = VAR_2->decls;

    FUNC_0("Searching for declaration for fvf %08x... ", VAR_3);

    VAR_7 = 0;
    VAR_8 = VAR_2->numConvertedDecls - 1;
    while(VAR_7 <= VAR_8) {
        VAR_6 = (VAR_7 + VAR_8) >> 1;
        FUNC_0("%d ", VAR_6);
        if(VAR_9[VAR_6].fvf == VAR_3) {
            FUNC_0("found %p\n", VAR_9[VAR_6].decl);
            return VAR_9[VAR_6].decl;
        } else if(VAR_9[VAR_6].fvf < VAR_3) {
            VAR_7 = VAR_6 + 1;
        } else {
            VAR_8 = VAR_6 - 1;
        }
    }
    FUNC_0("not found. Creating and inserting at position %d.\n", VAR_7);

    VAR_5 = FUNC_4(VAR_2->wined3d_device,
            VAR_3, VAR_2, &VAR_1, &VAR_4);
    if (VAR_5 != VAR_0) return ((void*)0);

    if (VAR_2->declArraySize == VAR_2->numConvertedDecls)
    {
        unsigned int VAR_10 = FUNC_2(VAR_2->declArraySize / 2, 8);

        if (!(VAR_9 = FUNC_1(VAR_9,
                (VAR_2->numConvertedDecls + VAR_10) * sizeof(*VAR_9))))
        {
            FUNC_5(VAR_4);
            return ((void*)0);
        }
        VAR_2->decls = VAR_9;
        VAR_2->declArraySize += VAR_10;
    }

    FUNC_3(VAR_9 + VAR_7 + 1, VAR_9 + VAR_7, sizeof(VAR_9[0]) * (VAR_2->numConvertedDecls - VAR_7));
    VAR_9[VAR_7].decl = VAR_4;
    VAR_9[VAR_7].fvf = VAR_3;
    VAR_2->numConvertedDecls++;

    FUNC_0("Returning %p. %d decls in array\n", VAR_4, VAR_2->numConvertedDecls);
    return VAR_4;
}
