
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int* cp; } ;
typedef TYPE_3__ match_state_t ;
typedef int jsbytecode ;
typedef int WCHAR ;
struct TYPE_15__ {int* bits; } ;
struct TYPE_19__ {int converted; int length; TYPE_1__ u; } ;
struct TYPE_18__ {int* cpbegin; int* cpend; TYPE_2__* regexp; scalar_t__ stateStackTop; } ;
struct TYPE_16__ {int flags; size_t parenCount; size_t source_len; int* source; size_t classCount; TYPE_5__* classList; int * program; } ;
typedef size_t REOp ;
typedef TYPE_4__ REGlobalData ;
typedef TYPE_5__ RECharSet ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,TYPE_3__*,size_t) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,TYPE_3__*,int const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,size_t*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int const*,size_t) ;
 int FUNC_10 (int) ;
 char** VAR_3 ;
 int FUNC_11 (int) ;

__attribute__((used)) static inline match_state_t *
FUNC_12(REGlobalData *VAR_4, match_state_t *VAR_5, REOp VAR_6,
            jsbytecode **VAR_7, BOOL VAR_8)
{
    match_state_t *VAR_9 = ((void*)0);
    WCHAR VAR_10;
    size_t VAR_11;
    size_t VAR_12, VAR_13, VAR_14;
    jsbytecode *VAR_15 = *VAR_7;
    const WCHAR *VAR_16;
    const WCHAR *VAR_17 = VAR_5->cp;
    WCHAR VAR_18;
    RECharSet *VAR_19;

    const char *VAR_20 = VAR_3[VAR_6];
    FUNC_7("\n%06d: %*s%s\n", (int)(VAR_15 - VAR_4->regexp->program),
          (int)VAR_4->stateStackTop * 2, "", VAR_20);

    switch (VAR_6) {
      case 142:
        VAR_9 = VAR_5;
        break;
      case 146:
        if (VAR_5->cp != VAR_4->cpbegin) {
            if (
                !(VAR_4->regexp->flags & VAR_2)) {
                break;
            }
            if (!FUNC_5(VAR_5->cp[-1]))
                break;
        }
        VAR_9 = VAR_5;
        break;
      case 141:
        if (VAR_5->cp != VAR_4->cpend) {
            if (
                !(VAR_4->regexp->flags & VAR_2)) {
                break;
            }
            if (!FUNC_5(*VAR_5->cp))
                break;
        }
        VAR_9 = VAR_5;
        break;
      case 129:
        if ((VAR_5->cp == VAR_4->cpbegin || !FUNC_4(VAR_5->cp[-1])) ^
            !(VAR_5->cp != VAR_4->cpend && FUNC_4(*VAR_5->cp))) {
            VAR_9 = VAR_5;
        }
        break;
      case 128:
        if ((VAR_5->cp == VAR_4->cpbegin || !FUNC_4(VAR_5->cp[-1])) ^
            (VAR_5->cp != VAR_4->cpend && FUNC_4(*VAR_5->cp))) {
            VAR_9 = VAR_5;
        }
        break;
      case 143:
        if (VAR_5->cp != VAR_4->cpend && !FUNC_5(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 144:
        if (VAR_5->cp != VAR_4->cpend && FUNC_3(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 134:
        if (VAR_5->cp != VAR_4->cpend && !FUNC_3(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 148:
        if (VAR_5->cp != VAR_4->cpend && FUNC_4(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 135:
        if (VAR_5->cp != VAR_4->cpend && !FUNC_4(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 132:
        if (VAR_5->cp != VAR_4->cpend && FUNC_10(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 133:
        if (VAR_5->cp != VAR_4->cpend && !FUNC_10(*VAR_5->cp)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 147:
        VAR_15 = FUNC_6(VAR_15, &VAR_11);
        FUNC_8(VAR_11 < VAR_4->regexp->parenCount);
        VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_11);
        break;
      case 140:
        VAR_15 = FUNC_6(VAR_15, &VAR_12);
        FUNC_8(VAR_12 < VAR_4->regexp->source_len);
        VAR_15 = FUNC_6(VAR_15, &VAR_13);
        FUNC_8(1 <= VAR_13);
        FUNC_8(VAR_13 <= VAR_4->regexp->source_len - VAR_12);
        if (VAR_13 <= (size_t)(VAR_4->cpend - VAR_5->cp)) {
            VAR_16 = VAR_4->regexp->source + VAR_12;
            FUNC_7("%s\n", FUNC_9(VAR_16, VAR_13));
            for (VAR_14 = 0; VAR_14 != VAR_13; VAR_14++) {
                if (VAR_16[VAR_14] != VAR_5->cp[VAR_14])
                    return ((void*)0);
            }
            VAR_5->cp += VAR_13;
            VAR_9 = VAR_5;
        }
        break;
      case 139:
        VAR_10 = *VAR_15++;
        FUNC_7(" '%c' == '%c'\n", (char)VAR_10, (char)*VAR_5->cp);
        if (VAR_5->cp != VAR_4->cpend && *VAR_5->cp == VAR_10) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 137:
        VAR_15 = FUNC_6(VAR_15, &VAR_12);
        FUNC_8(VAR_12 < VAR_4->regexp->source_len);
        VAR_15 = FUNC_6(VAR_15, &VAR_13);
        FUNC_8(1 <= VAR_13);
        FUNC_8(VAR_13 <= VAR_4->regexp->source_len - VAR_12);
        VAR_16 = VAR_4->regexp->source;
        VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_16 + VAR_12, VAR_13);
        break;
      case 138:
        VAR_10 = *VAR_15++;
        if (VAR_5->cp != VAR_4->cpend && FUNC_11(*VAR_5->cp) == FUNC_11(VAR_10)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 131:
        VAR_10 = FUNC_2(VAR_15);
        FUNC_7(" '%c' == '%c'\n", (char)VAR_10, (char)*VAR_5->cp);
        VAR_15 += VAR_0;
        if (VAR_5->cp != VAR_4->cpend && *VAR_5->cp == VAR_10) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 130:
        VAR_10 = FUNC_2(VAR_15);
        VAR_15 += VAR_0;
        if (VAR_5->cp != VAR_4->cpend && FUNC_11(*VAR_5->cp) == FUNC_11(VAR_10)) {
            VAR_9 = VAR_5;
            VAR_9->cp++;
        }
        break;
      case 145:
        VAR_15 = FUNC_6(VAR_15, &VAR_14);
        FUNC_8(VAR_14 < VAR_4->regexp->classCount);
        if (VAR_5->cp != VAR_4->cpend) {
            VAR_19 = &VAR_4->regexp->classList[VAR_14];
            FUNC_8(VAR_19->converted);
            VAR_18 = *VAR_5->cp;
            VAR_14 = VAR_18 >> 3;
            if (VAR_19->length != 0 &&
                VAR_18 <= VAR_19->length &&
                (VAR_19->u.bits[VAR_14] & (1 << (VAR_18 & 0x7)))) {
                VAR_9 = VAR_5;
                VAR_9->cp++;
            }
        }
        break;
      case 136:
        VAR_15 = FUNC_6(VAR_15, &VAR_14);
        FUNC_8(VAR_14 < VAR_4->regexp->classCount);
        if (VAR_5->cp != VAR_4->cpend) {
            VAR_19 = &VAR_4->regexp->classList[VAR_14];
            FUNC_8(VAR_19->converted);
            VAR_18 = *VAR_5->cp;
            VAR_14 = VAR_18 >> 3;
            if (VAR_19->length == 0 ||
                VAR_18 > VAR_19->length ||
                !(VAR_19->u.bits[VAR_14] & (1 << (VAR_18 & 0x7)))) {
                VAR_9 = VAR_5;
                VAR_9->cp++;
            }
        }
        break;

      default:
        FUNC_8(VAR_1);
    }
    if (VAR_9) {
        if (!VAR_8)
            VAR_5->cp = VAR_17;
        *VAR_7 = VAR_15;
        FUNC_7(" *\n");
        return VAR_9;
    }
    VAR_5->cp = VAR_17;
    return ((void*)0);
}
